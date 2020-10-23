# FF9-KOJR

## Story

Getting back to FF9 because FF7 RMK is out here, but I don't have PS4 :(

I'm still really bad at FF9 Jump Rope minigame so I was looking for fun ideas on YouTube.
Found this https://www.youtube.com/watch?v=Z9EJICJh6oQ with GitHub link https://github.com/mikelhamer/kojr .

Well, I don't have a RaspberryPi at home, but I have an Arduino.

Done some research on how to link an Arduino with a Solenoid: https://core-electronics.com.au/tutorials/solenoid-control-with-arduino.html

In the video he explains that he can't go over 700 so i think that the timing must need to be tweaked. So get back on GitHub i found this:  https://github.com/septomor/FF9-Jump-Rope-Script

Well, i hope that the timing is correct, now just need to wait and let's jump :)

## How to use it
- Prepare your electronic setup.
- Put everything in place.
- Place yourself in front of the little girl.
- Launch the program.
- Wait about 10 minutes.

## Electronic

### Required components for this project:

- 1 x [Arduino Uno](https://www.amazon.fr/dp/B008GRTSV6/)
- 1 x [Solderless breadboard](https://www.amazon.fr/dp/B07K8PQ4B5/)
- 5 x [Jumper Wires](https://www.amazon.fr/dp/B074P726ZR/)
- 1 x [220 Ω Resistor](https://www.amazon.fr/dp/B07Q87JZ9G/)
- 1 x [Diode (1N4001)](https://www.amazon.fr/dp/B00QLHMR6G/)
- 1 x [Power Transistor (2N3904)](https://www.amazon.fr/dp/B00JFOT0OE/)
- 1 x [5v Solenoid](https://www.amazon.fr/dp/B0848TTHZB/) *or [this one, if the first one is too small](https://www.sparkfun.com/products/11015)*

### Setup
[![Electronic setup](https://raw.githubusercontent.com/kevingrillet/FF9-KOJR/master/Fritzing/KOJR_bb.png "Fritzing")](https://github.com/fritzing/fritzing-app)

## Case

### Fusion 360

#### Third Revision
Well, why not use Thingiverse and just make a platform:

- A small case for the Solenoid + paper:

[![Solenoid Case](https://raw.githubusercontent.com/kevingrillet/FF9-KOJR/master/Fusion360/%40Ressouces/SolenoidoCace/preview.jpg "Solenoid Case")](https://www.thingiverse.com/thing:344184)

- A Stand for the controller maybe?

[![Playstation DuelShock Contoller Stand (PS2)](https://raw.githubusercontent.com/kevingrillet/FF9-KOJR/master/Fusion360/%40Ressouces/Playstation%2BDuelShock%2BContoller%2BStand%2B(PS2)/images/preview.png "Playstation DuelShock Contoller Stand (PS2)")](https://www.thingiverse.com/thing:4028214)

Print the controller Stand, then adjust the height for the Solenoid, looks to be a better option!

[![Case rev3](https://raw.githubusercontent.com/kevingrillet/FF9-KOJR/master/Fusion360/KOJR_rev3.png "Fusion 360")](https://www.autodesk.com/products/fusion-360/overview)

<details>
<summary>Second Revision</summary>

Well, why not use Thingiverse and just make a platform:

- A small case for the Solenoid:

[![Solenoid Case](https://raw.githubusercontent.com/kevingrillet/FF9-KOJR/master/Fusion360/%40Ressouces/SolenoidoCace/preview.jpg "Solenoid Case")](https://www.thingiverse.com/thing:344184)

- A Wall Mount for the controller: 

[![Playstation Controller Wall Mount](https://raw.githubusercontent.com/kevingrillet/FF9-KOJR/master/Fusion360/%40Ressouces/Playstation_Controller_Wall_Mount/images/preview.jpg "Playstation Controller Wall Mount")](https://www.thingiverse.com/thing:3767193)

Still need to adjust everything, still not good for me :/

[![Case rev2](https://raw.githubusercontent.com/kevingrillet/FF9-KOJR/master/Fusion360/KOJR_rev2.png "Fusion 360")](https://www.autodesk.com/products/fusion-360/overview)
</details>

<details>
<summary>First try</summary>

Yeah, it's not really good :'(

[![Case](https://raw.githubusercontent.com/kevingrillet/FF9-KOJR/master/Fusion360/KOJR.png "Fusion 360")](https://www.autodesk.com/products/fusion-360/overview)

Need to adjust everything, so maybe 2 or 3 prints, better forget this one.
</details>

## WIP
- [X] Arduino code -> 16.04.2020
- [X] Electronic setup -> [~~Looking for free Fritzing~~](https://fritzing.org/download/) -> 19.04.2020
- [ ] First test -> ~~Buy components~~ -> Components incoming
- [ ] Timing tweaked
- [X] 3D case first try -> ~~Discover [Fusion360](https://www.autodesk.com/products/fusion-360/overview)~~ -> ~~Update case~~ -> 20.04.2020
- [ ] Print case -> [Buy 3D Printer](https://shop.prusa3d.com/fr/imprimantes/994-original-prusa-mini.html) -> Wait -> Discover [Slicer](https://www.prusa3d.fr/prusaslicer/)
- [ ] Adjust case
- [ ] Complete test
- [ ] Final commit with video

## Notes:
<details>
<summary>Hacking the controller way</summary>

Well, if I can't build the solenoid way, why not just hack the controller?

With some work I think it's possible to directly send inputs to the PS2.


Links:

- https://store.curiousinventor.com/guides/PS2
Build a link between the Arduino and the Male connector should be possible i hope.

- https://github.com/madsci1016/Arduino-PS2X
Instead of reading the inputs I think it's possible to send them.
</details>
