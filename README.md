# Multi Process Furnace
![Hot Photo][image-1]
Jordan Haisley
2/21/2020 

## Disclaimers



**About**

I am a student, and am not an expert in product design, fabrication, or any other part of this project. While I am sharing the information I have learned throughout the creation of this project, this project is dangerous, and any attempt to replicate could easily result in fire, death, destruction, etc.  Attempting to replicate the project is at your own risk.



**Warranty Disclaimer.**

THIS PROJECT AND ALL CONTENT RELATED THERETO ARE PROVIDED “AS IS” AND “AS AVAILABLE.” OUR PARTIES MAKE NO, AND HEREBY DISCLAIM ALL, REPRESENTATIONS, WARRANTIES, OR CONDITIONS OF ANY KIND, WHETHER EXPRESS, IMPLIED \(EITHER IN FACT OR BY OPERATION OF LAW\), OR STATUTORY, WITH RESPECT TO THE SERVICE, CONTENT AND ANY THIRD PARTY PRODUCTS AND/ORSERVICES ON OR AVAILABLE THROUGH THE SERVICE, INCLUDING, WITHOUT LIMITATION, ALL WARRANTIES OR CONDITIONS OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NONINFRINGEMENT, AND ALL WARRANTIES THAT MAY ARISE FROM COURSE OF DEALING, COURSE OF PERFORMANCE, OR USAGE OF TRADE. YOUR USE OF THE SERVICE \(IN WHOLE OR IN PART\) AND ANY CONTENT IS AT YOUR OWN DISCRETION AND RISK. OUR PARTIES DO NOT WARRANT THAT ANY USE OF OR ACCESS TO THE SERVICE OR ANY CONTENT WILL BE ERROR-FREE, COMPLETE, SECURE OR THE CONTENT WILL NOT BE OTHERWISE LOST OR DAMAGED OR MEET YOUR REQUIREMENTS OR EXPECTATIONS; THAT OPERATION OR AVAILABILITY WILL BE UNINTERRUPTED; OR THAT ERRORS OR FAILURES WILL BE CORRECTED OR REMEDIED. OUR PARTIES DO NOT WARRANT THAT THE SERVICE OR ANY CONTENT WILL PERFORM IN ANY PARTICULAR MANNER. WITHOUT LIMITATION OF THE GENERALITY OF THE FOREGOING, YOU ACKNOWLEDGE AND AGREE THAT YOU ARE SOLELY RESPONSIBLE FOR \(AND OUR PARTIES ASSUME NO RESPONSIBILITY AND WILL HAVE NO LIABILITY OF ANY KIND FOR\) \(1\) THE DECISIONS THAT YOU MAY MAKE REGARDING THE SERVICE; \(2\) USE OF THE SERVICE OR CONTENT INCLUDING WITHOUT LIMITATION ANY CONTENT \(OR ANY REPRESENTATIONS, ADAPTATIONS OR TRANSLATIONS THEREOF\), DATA, INFORMATION, OR OTHER MATERIAL ACCESSED BY YOU IN CONNECTION WITH THE SERVICE OR THROUGH YOUR ACCOUNT, COMPUTER SYSTEM OR MOBILE DEVICE OR ANY LOSS OF DATA; OR \(3\) ANY LOSS, DAMAGE OR OTHER EFFECTS ON YOU THAT MAY RESULT FROM USE OF THE SERVICE OR ANY CONTENT \(OR ANY REPRESENTATIONS, ADAPTATIONS OR TRANSLATIONS THEREOF\) OR THE FAILURE TO COMPLY WITH THESE TERMS. OUR PARTIES MAKE NO WARRANTIES TO ANY THIRD PARTY.We make no warranties or representations that the Service, or any part\(s\) thereof, OR ANY CONTENT \(OR ANY REPRESENTATIONS, ADAPTATIONS OR TRANSLATIONS THEREOF\) is/are ACCURATE OR COMPLETE OR IS/ARE appropriate or available for use in any particular jurisdiction. In choosing to access OR USE the Service OR ANY CONTENT, you do so at your own risk, and you are responsible for complying with all local laws, rules and regulations, including local rules regarding online conduct and acceptable content. This Section will be enforceable to the maximum extent allowed by applicable law. No information or advice \(whether written, oral or otherwise\) provided by Our Parties or their representatives will create any warranty or in any way affect the disclaimers of warranty or limitations of liability expressly provided in these Terms.


**A Special Note About Fabrication and Handling of Physical Materials.**

PLEASE NOTE YOU ARE SOLELY RESPONSIBLE FOR DETERMINING THE SUITABILITY OF ANY PRODUCTS, SERVICES, MATERIALS AND PROCESSES MADE AVAILABLE TO YOU.




## Introduction

The assignment was to “Working individually, design and create a prototype for a product that promotes environmental sustainability.” 

**Opportunity**
During our class demonstrations we discussed thermoforming recycled materials.  Thermoforming is a repeatable technique that can be efficiently leveraged to produce items.  Our lab does not have a sheet press to allow forming sheet goods which can then be further machined or thermoformed.  The use of small pieces of plastic is key to effective recycling since few pieces come in ideal form factors for reuse.   

My original goal was to allow the production of plastic sheets from recycled materials, however during the design phase I realized that designing the oven to be capable of multiple processes added only a small amount of complexity and would allow the oven to be used for many different uses. 

## Methods

Throughout this project I followed the engineering design process, and throughout the process revisions were made based upon initial research, data, prototyping, and the initial testing. 


## Materials

Overall there are many areas of this design in which substitutions can be made ￼based upon materials which are locally available and techniques which individual builders have available to them.  

I reused a toaster oven to provide the case and heating elements for the project, this decision did create some limitations for the final design.  

##### Case:
Ultimately the case could be any any metal box which could be easily insulated.  The donor toaster oven was built from a stainless steel alloy, providing a good base to build upon. 

Many newer toaster ovens are constructed of materials which would not provide good heat resistance, and thus would not be good candidates for reuse. 

Additionally two metal 4”x4” junction wiring boxes were added to house line-voltage wiring and switching, as the original case did not have enough room for the needed switch and solid state relay.

##### Insulation:

Ceramic wool, mineral wool, or refractory cement can be used.  Coating with water glass, or a commercial refractory coating is required to encapsulate and rigidize ceramic wool, and is recommended for other insulating materials to increase durability.
​
##### Electronics:

Almost any programmable microcontroller with GPIO pins could be used, specifically AVR, Arduino, ESP32, and Raspberry pi are known to be compatible, but many others should be as well.


The solid state relay could be replaced by a traditional relay and a mosfet. See [\[] https://www.electronics-tutorials.ws/blog/relay-switch-circuit.html ][1] for a description of how to implement this type of circuit. 
​
##### Heating Elements:
The donor toaster oven contained 4 cal-rod type tubular heating elements with mica insulating mounting holders and ceramic terminals. These were manufactured by WATLOW, have a maximum operating temperature of 1200F and are still available in the event replacements are needed.

Different heating elements could be used, some of which would allow a much higher operating temperature range.  Kanthal wire is commonly used in kilns and industrial furnaces, and was considered if I had not been able to reuse the cal-rod elements. 


##### Construction Techniques:

Welded pieces can be constructed via any welding process, or welding could be avoided completely through the use of rivets or screws. 

For the prototype design I used a combination of techniques, an additional back plate was added to strengthen the rear of the case and provide a mounting point for the thermocouple. A layer of rock wool insulation was sandwiched loosely between the original back of the case and the new back plate, the new back plate was then welded in place.  Adding the insulation minimizes exposure to high temperatures and allows for the possible mounting of electronics to the back of the furnace.

A hole was drilled through the original back plate, and a smaller hole was drilled through the inner back plate, to which the thermocouple was mounted.  Another hole was drilled and a 1/4 NPT pipe fitting was attached, this allows the chamber to be flooded with gases for special processes such as case hardening. 

Rock wool insulation was added to both sides of the oven, sheetmetal attachments were welded in place, and then the original plastic legs were attached to these, protecting the plastic legs from heat exposure.  Two metal wiring boxes were attached to the side of the case with nuts and bolts.  A grommet was placed which allowed wires to pass into the boxes.  

The wiring for the heating elements was long enough to be routed outside of the case and was passed through the grommet into the metal wiring box, where they were connected to the switched leg of the solid state relay. 

The heating elements and thermocouple were wrapped with aluminum foil to protect them, and then refractory cement was applied to the inside of the oven to a thickness of at least 0.25 inches, this process was repeated for all sides, and then the refractory mix was allowed to dry for several hours before the foil was removed. This was then allowed to cure for two days before any heat was applied. The refractory mix manufacturer’s recommendations for initial firing were followed (see chart below). These vary based upon manufacturer, refractory type, and application. 

|Temp | Ramp Rate   | Hold Time   |
|---|---|---|
| 50C  | 25C/hr  | 2 Hours  |
|  75C | 25C/hr  | 2 Hours  |
|  100C | 25C/hr  | 6 Hours  |
|  250C | 50C/hr  | 12 Hours  |
| 450C | 50C/hr | 12 Hours |


###### Safety Note:
I reviewed the specifications for the heating elements, wire, wire connectors, and information on the catastrophic failure modes from the journal of fire sciences.  Every effort was made to ensure that even in the event of catastrophic failure the design would remain safe. While most failure scenarios would result a failure to heat, a catastrophic failure could result in a fire within the heating chamber.  Although not recommended, the chamber is capable of containing the combustion of most flammable materials which would be used within the furnace. Combustion byproducts would present one of the most significant risks, and thus this type of design should not be used within a residence, office, or other dwelling.  The SSR used features a non-resettable overcurrent fuse which acts as an additional, although expensive safety feature. 


## Designs & Illustrations

Electrical Diagram ![Electrical Diagram][image-2]



## Design Defense

A multiprocess programable furnace allows for the creation, reuse, repair and recycling of many materials.


Annealing allows for the repair of hardened metals, tempering and case hardening allow for strengthening of metals.


For plastics many waste plastics can be processed into sheet goods via simple molds such as that which is included within this design.  


Most significantly, the use of a multi-stage program creates a recycling pathway to transform micro-plastics in water into machinable sheet goods.

According to NOAA micro plastics are defined as plastics with the size of less than 5 mm. The micro plastics that are of the most concern are those which are found in our water sources and oceans.￼  Currently most work is aimed at preventing plastics from entering water sources, and some limited efforts are being made to collect plastics already in water.  Generally it is considered not cost effective to recycle these micro plastics, and so they are sent to landfills.

## Evaluation













## Reflection

Overall this project took significantly more time and effort than I initially envisioned, but I did produce a useful tool, that would have otherwise had a cost of about $900 - $5000.  

Originally I intended that this design would be able to be replicated by anyone, however safety considerations require that I don’t recommend anyone actually duplicate the design.  Any one who attempts to do so would need to have a lot of knowledge in order to do so safely. 

My initial plan for mounting the electronics meant that they would be on the back of the case, ultimately that would mean that I couldn’t see indicator lights on the electronics enclosure, and that it would be impossible to plug and unplug the USB connector while the system was operating.  I ended up not mounting the electronics and placing it to the side of the system.  

This also complicated things with my low-voltage wiring connections, which used DuPont 1 pin connectors, which while appropriate for a mounted application, these did not work well when exposed to the stress of movement, and after moving the system to present to the class, I ended up needing to replace most of these connectors. Another connector type would be better.

## References


Feldman, D. \(2005\). Polyblend compatibilization. Journal of Macromolecular Science, Part A: Pure and Applied Chemistry, 42\(5\), 587–605. https://doi.org/10/d9964k

​

Inskeep, M. D., & Zagar, W. T. \(1970\). Process for heat treating fabricated plastic articles \(United States Patent No. US3544673A\). https://patents.google.com/patent/US3544673A/en

​

Paul, W. \(1971\). Stress relieving of molded plastic structures \(United States Patent No. US3555135A\). https://patents.google.com/patent/US3555135A/en

​

Sadrmohaghegh, C., Scott, G., & Setudeh, E. \(1985\). Recycling of mixed plastics. Polymer-Plastics Technology and Engineering, 24\(2–3\), 149–185. https://doi.org/10/bz482t

​

Steensgaard, I. M., Syberg, K., Rist, S., Hartmann, N. B., Boldrin, A., & Hansen, S. F. \(2017\). From macro-to microplastics-Analysis of EU regulation along the life cycle of plastic bags. Environmental Pollution, 224, 289–299. https://doi.org/10/f95ttw

​

Tai, H.-S., & Liu, C.-L. \(2003\). Recycling of mixed EPS, PP and HDPE waste plastics at fish market in Taiwan. Journal of the Chinese Institute of Environmental Engineering, 13\(2\), 125–133.

Thompson, R. C. \(2015\). Microplastics in the marine environment: Sources, consequences and solutions. In Marine anthropogenic litter \(pp. 185–200\). Springer, Cham.

Totten, G. E., & MacKenzie, D. S. \(2003\). Handbook of Aluminum: Vol. 1: Physical Metallurgy and Processes. CRC Press.

US Department of Commerce, N. O. and A. A. \(n.d.\). What are microplastics? Retrieved February 26, 2020, from https://oceanservice.noaa.gov/facts/microplastics.html

Wu, W.-M., Yang, J., & Criddle, C. S. \(2016\). Microplastics pollution and reduction strategies. Frontiers of Environmental Science & Engineering, 11\(1\), 6. https://doi.org/10/ggmqbt

[1]:	https://www.electronics-tutorials.ws/blog/relay-switch-circuit.html "https://www.electronics-tutorials.ws/blog/relay-switch-circuit.html"

[image-1]:	https://wikifactory.com/files/RmlsZTozNDE1Njg=
[image-2]:	https://wikifactory.com/files/RmlsZTozNDE1NTk=