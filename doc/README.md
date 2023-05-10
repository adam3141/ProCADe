# ProCADe
## Design goals and intent
ProCADe is an elecronics design package that incorporates the following set of features
- Schematic Designer
- PCB Layout Designer
- Component Editor
- Gerber viewer
- Circuit Simulation using SPICE models
- Electrical and Thermal simulation of PCB

Cross platform functionality will be desired, but ease of development is the most important so this might restrict functionality to the Windows operating system using WPF as the window framework.

CSharp as a language will be well suited to this as most of the UI and logic can be coded with this language but there will be a need to use a more performant language such as C++ where optimization is key.

The reason for designing ProCADe is due to the inadequate functionality in some of the commercial (and open source) designers out there.

A couple of these I have had experience in.
### Altium Designer
This is a very capable piece of software for the design of PCBs, however there are quite a few quirks that cause frustration
- Alignment of objects
  - If one of the objects to align is in a Locked state, then alignment is not possible. There are many situations where you want to keep a component locked in place on the PCB and then align the rest of components to it
- Wire drawing
  - The drawing of wires in schematics is quite clunky and each wire drawn seems to be its own wire object. This can cause some frustation when wires have a join and you go to delete part of the wire, say up to the join but can end up deleting the wire all the way to the source.
