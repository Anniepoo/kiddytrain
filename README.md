# kiddytrain
A silly train game where you take kiddies around a park with a little train

## Game Design

### Narrative

You are the driver of a train in a zoo. There are various stations. Each station has kiddies at it. Each kiddy wants to see an animal. 

The kiddies tend to "infect" each other - so some kids change their mind when near a 'stronger' kid. Alice says "I want to see them monkeys" and Timmy decides
he wants to see monkeys too, but not always.  So any station tends to have
kids around it with same goal.

off the train the kids move slowly to their objective. They spend time at objective.

Kids have happiness rating. It goes up when near their preferred exhibit.

You have a train you control. Stop in a station and the kiddies get on or off.
Each kid has a cycle:
1. view exhibit
2. pick new animal
3. walk to nearest station. If objective exhibit is < 2x station walk dist, instead walk to exhibit and go to step 1 on arrival
4. wait for train. Get on when it arrives if there's room
5. ride until you are at the nearest station to your preferred animal
6. get off
7. walk to your animal
8. goto 1

The train starts with one car, capable of carrying 2 kids. Every time you make the kids happy for a while you get one extra car and more kids arrive at the park.

if kids are unhappy they walk to the exit. If they reach the exit they leave. If you get too few kids in park you lose a car

## controls - 
W  -  accelerate train
A - slow down train - or back up
S, D - take left or right fork of turnouts you encounter






