# LED-Display

<img src= images/9.jpg width="25%">         <img src= images/movie.gif width="14.7%">

<br> 
This project demonstrates how to set up a five by five LED display
<br> <br> 

## Getting Started

This instructional will help guide you in making this project at home
<br> <br>

### Prerequisites

- 25 5mm LED's
- A five by five LED display casing, here's the [dimensioned diagram](https://github.com/BarakBinyamin/LED-Display/blob/master/images/Casing_dimensions.jpg) to make one
- An arduino microcontroller <br>

Before you start, it may be helpful to take a look at the [circuit diagram](https://github.com/BarakBinyamin/LED-Display/blob/master/images/Circuit_Diagram.png)   


### Setup Steps

#### 1. Bend all 25 short leads down
<img src= images/1.jpg width="50%"><img src= images/2.jpg width="49.5%">
#### 2. Bend all 25 long leads to the right
It's important they are all the same height and a good distance up from the LED, ensuring the horizontal and vertical leads won't touch  
<img src= images/3.jpg width="49.99%"><img src= images/4.jpg width="50%">  

#### 3. Solder the rows and colums
Solder all the horizontal leads, row by row, then Solder all the vertical leads. It's important to avoid connecting the horizontal and vertical leads. It may be helpful to use the casing as a guide.  
<img src= images/5_.jpg width="45%"><img src= images/6.jpg width="45.4%">

#### Front and Back
The image of the back is fliped  
<img src= images/8.jpg width="50%"><img src= images/7.jpg width="46.4%">


<img src= images/9.jpg width="50%">   


## Deployment
- Upload your sketch to the arduino
- Connect the left-side leads of the Display to Digital IO ports 5-9(or whichever ports you chose) on the arduino
- Connect the bottom leads of the Display to Digital IO ports 0-4 (or whichever ports you chose) on the the arduino
- Power up the arduino


## Acknowledgments
- https://appelsiini.net/2011/how-does-led-matrix-work/
- https://www.circuitstoday.com/wp-content/uploads/2018/02/Arduino-Mega-Pin-Configuration.jpg
