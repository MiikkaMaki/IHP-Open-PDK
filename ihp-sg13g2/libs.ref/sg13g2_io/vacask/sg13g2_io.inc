// Converted from IHP SG13G2 PDK for Ngspice

//************************************************************************
//*
//* Copyright 2024 IHP PDK Authors
//* 
//* Licensed under the Apache License, Version 2.0 (the "License");
//* you may not use this file except in compliance with the License.
//* You may obtain a copy of the License at
//* 
//*    https://www.apache.org/licenses/LICENSE-2.0
//* 
//* Unless required by applicable law or agreed to in writing, software
//* distributed under the License is distributed on an "AS IS" BASIS,
//* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//* See the License for the specific language governing permissions and
//* limitations under the License.
//*
//************************************************************************

//* Library name: sg13g2_io
//* Cell name: sg13g2_DCNDiode
//* View name: schematic
subckt sg13g2_DCNDiode(anode cathode guard)
xd1 (sub_ cathode) dantenna  l=27.78u w=1.26u m=1
xd0 (sub_ cathode) dantenna  l=27.78u w=1.26u m=1
xr0 (anode sub_) ptap1  r=5.191
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_DCPDiode
//* View name: schematic
subckt sg13g2_DCPDiode(anode cathode guard)
xd1 (anode cathode) dpantenna  l=27.78u w=1.26u m=1
xd0 (anode cathode) dpantenna  l=27.78u w=1.26u m=1
xr0 (guard sub_) ptap1  r=17.289
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_IOPadIOVss
//* View name: schematic
subckt sg13g2_IOPadIOVss(vdd vss iovdd iovss)
xi3 (iovss iovss iovdd) sg13g2_DCNDiode 
xi2 (iovss iovdd iovss) sg13g2_DCPDiode 
xr1 (vss sub_) ptap1  r=22.472
xr0 (iovss sub_) ptap1  r=169.45m
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_Clamp_N43N43D4R
//* View name: schematic
subckt sg13g2_Clamp_N43N43D4R(gate iovss pad)
xn0_1_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_2_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_3_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_4_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_5_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_6_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_7_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_8_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_9_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_10_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_11_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_12_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_13_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_14_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_15_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_16_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_17_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_18_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_19_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_20_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_21_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_22_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_23_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_24_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_25_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_26_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_27_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_28_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_29_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_30_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_31_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_32_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_33_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_34_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_35_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_36_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_37_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_38_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_39_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_40_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_41_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_42_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_43_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_44_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_45_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_46_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_47_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_48_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_49_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_50_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_51_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_52_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_53_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_54_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_55_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_56_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_57_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_58_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_59_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_60_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_61_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_62_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_63_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_64_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_65_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_66_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_67_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_68_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_69_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_70_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_71_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_72_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_73_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_74_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_75_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_76_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_77_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_78_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_79_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_80_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_81_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_82_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_83_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_84_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_85_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_86_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_87_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_88_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_89_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_90_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_91_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_92_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_93_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_94_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_95_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_96_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_97_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_98_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_99_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_100_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_101_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_102_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_103_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_104_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_105_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_106_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_107_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_108_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_109_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_110_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_111_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_112_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_113_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_114_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_115_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_116_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_117_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_118_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_119_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_120_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_121_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_122_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_123_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_124_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_125_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_126_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_127_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_128_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_129_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_130_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_131_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_132_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_133_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_134_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_135_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_136_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_137_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_138_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_139_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_140_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_141_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_142_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_143_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_144_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_145_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_146_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_147_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_148_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_149_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_150_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_151_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_152_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_153_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_154_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_155_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_156_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_157_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_158_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_159_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_160_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_161_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_162_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_163_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_164_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_165_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_166_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_167_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_168_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_169_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_170_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_171_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xn0_172_ (pad gate iovss sub_) sg13_hv_nmos (
  w=4.4u l=600.0n ng=1 ad=1.496e-12 as=1.496e-12 pd=9.48e-06 ps=9.48e-06 m=1
)
xr0 (iovss sub_) ptap1  r=9.999
xd0 (sub_ gate) dantenna  l=480n w=480n m=1
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_RCClampResistor
//* View name: schematic
subckt sg13g2_RCClampResistor(pin1 pin2)
xr15 (net15 net16 sub_) rppd  r=5.239k l=20u w=1u
xr20 (net20 net21 sub_) rppd  r=5.239k l=20u w=1u
xr23 (net23 net24 sub_) rppd  r=5.239k l=20u w=1u
xr17 (net17 net18 sub_) rppd  r=5.239k l=20u w=1u
xr16 (net16 net17 sub_) rppd  r=5.239k l=20u w=1u
xr25 (net25 pin2 sub_) rppd  r=5.239k l=20u w=1u
xr22 (net22 net23 sub_) rppd  r=5.239k l=20u w=1u
xr19 (net19 net20 sub_) rppd  r=5.239k l=20u w=1u
xr24 (net24 net25 sub_) rppd  r=5.239k l=20u w=1u
xr21 (net21 net22 sub_) rppd  r=5.239k l=20u w=1u
xr18 (net18 net19 sub_) rppd  r=5.239k l=20u w=1u
xr5 (net5 net6 sub_) rppd  r=5.239k l=20u w=1u
xr8 (net8 net9 sub_) rppd  r=5.239k l=20u w=1u
xr11 (net11 net12 sub_) rppd  r=5.239k l=20u w=1u
xr14 (net14 net15 sub_) rppd  r=5.239k l=20u w=1u
xr2 (net2 net3 sub_) rppd  r=5.239k l=20u w=1u
xr1 (net1 net2 sub_) rppd  r=5.239k l=20u w=1u
xr13 (net13 net14 sub_) rppd  r=5.239k l=20u w=1u
xr10 (net10 net11 sub_) rppd  r=5.239k l=20u w=1u
xr7 (net7 net8 sub_) rppd  r=5.239k l=20u w=1u
xr4 (net4 net5 sub_) rppd  r=5.239k l=20u w=1u
xr12 (net12 net13 sub_) rppd  r=5.239k l=20u w=1u
xr9 (net9 net10 sub_) rppd  r=5.239k l=20u w=1u
xr6 (net6 net7 sub_) rppd  r=5.239k l=20u w=1u
xr3 (net3 net4 sub_) rppd  r=5.239k l=20u w=1u
xr0 (pin1 net1 sub_) rppd  r=5.239k l=20u w=1u
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_RCClampInverter
//* View name: schematic
subckt sg13g2_RCClampInverter(out in iovss supply)
xn1 (iovss in iovss sub_) sg13_hv_nmos (
  w=63.000u l=9.5u ng=7 ad=1.332e-11 as=1.332e-11 pd=7.496e-05 ps=7.496e-05 m=1
)
xn3 (out in iovss sub_) sg13_hv_nmos (
  w=54.000u l=500.0n ng=6 ad=1.026e-11 as=1.296e-11 pd=5.628e-05 ps=7.488e-05 m=1
)
xn0 (iovss in iovss sub_) sg13_hv_nmos (
  w=63.000u l=9.5u ng=7 ad=1.332e-11 as=1.332e-11 pd=7.496e-05 ps=7.496e-05 m=1
)
xn2 (out in iovss sub_) sg13_hv_nmos (
  w=54.000u l=500.0n ng=6 ad=1.026e-11 as=1.296e-11 pd=5.628e-05 ps=7.488e-05 m=1
)
xr0 (iovss sub_) ptap1  r=9.59
xp0 (out in supply supply) sg13_hv_pmos (
  w=350.000u l=500.0n ng=50 ad=6.65e-11 as=6.86e-11 pd=0.000369 ps=0.0003836 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_IOPadVdd
//* View name: schematic
subckt sg13g2_IOPadVdd(vdd vss iovdd iovss)
xi1 (net3 iovss vdd) sg13g2_Clamp_N43N43D4R 
xi4 (vdd net1) sg13g2_RCClampResistor 
xr1 (iovss sub_) ptap1  r=456.33m
xr0 (vss sub_) ptap1  r=22.472
xi3 (net3 net1 iovss vdd) sg13g2_RCClampInverter 
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_IOPadIOVdd
//* View name: schematic
subckt sg13g2_IOPadIOVdd(vdd vss iovdd iovss)
xi1 (net4 iovss iovdd) sg13g2_Clamp_N43N43D4R 
xi3 (iovdd net1) sg13g2_RCClampResistor 
xi2 (net4 net1 iovss iovdd) sg13g2_RCClampInverter 
xr1 (iovss sub_) ptap1  r=453.388m
xr0 (vss sub_) ptap1  r=22.472
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_IOPadVss
//* View name: schematic
subckt sg13g2_IOPadVss(vdd vss iovdd iovss)
xi1 (iovss vss iovdd) sg13g2_DCNDiode 
xi2 (vss iovdd iovss) sg13g2_DCPDiode 
xr1 (iovss sub_) ptap1  r=174.346m
xr0 (vss sub_) ptap1  r=22.832
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_Filler2000
//* View name: schematic
subckt sg13g2_Filler2000(vdd vss iovdd iovss)
xr1 (vss sub_) ptap1  r=101.912
xr0 (iovss sub_) ptap1  r=1.224
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_io_inv_x1
//* View name: schematic
subckt sg13g2_io_inv_x1(nq i vdd vss)
xn0 (nq i vss sub_) sg13_lv_nmos (
  w=3.93u l=130.00n ng=1 ad=1.336e-12 as=1.336e-12 pd=8.54e-06 ps=8.54e-06 m=1
)
xp0 (nq i vdd vdd) sg13_lv_pmos (
  w=4.41u l=130.00n ng=1 ad=1.499e-12 as=1.499e-12 pd=9.5e-06 ps=9.5e-06 m=1
)
xr0 (vss sub_) ptap1  r=258.978
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_LevelUp
//* View name: schematic
subckt sg13g2_LevelUp(o i iovdd vdd vss)
xn1 (net2 i vss sub_) sg13_lv_nmos (
  w=2.75u l=130.00n ng=1 ad=9.35e-13 as=9.35e-13 pd=6.18e-06 ps=6.18e-06 m=1
)
xp3 (net2 i vdd vdd) sg13_lv_pmos (
  w=4.75u l=130.00n ng=1 ad=1.615e-12 as=1.615e-12 pd=1.018e-05 ps=1.018e-05 m=1
)
xn0 (o net4 vss sub_) sg13_hv_nmos (
  w=1.9u l=450.00n ng=1 ad=0.0 as=0.0 pd=0.0 ps=0.0 m=1
)
xn3 (net4 i vss sub_) sg13_hv_nmos (
  w=1.9u l=450.00n ng=1 ad=0.0 as=0.0 pd=0.0 ps=0.0 m=1
)
xn2 (net3 net2 vss sub_) sg13_hv_nmos (
  w=1.9u l=450.00n ng=1 ad=0.0 as=0.0 pd=0.0 ps=0.0 m=1
)
xp0 (o net4 iovdd iovdd) sg13_hv_pmos (
  w=3.9u l=450.00n ng=1 ad=1.326e-12 as=1.326e-12 pd=8.48e-06 ps=8.48e-06 m=1
)
xp1 (net3 net4 iovdd iovdd) sg13_hv_pmos (
  w=300.0n l=450.00n ng=1 ad=1.02e-13 as=1.02e-13 pd=1.28e-06 ps=1.28e-06 m=1
)
xp2 (net4 net3 iovdd iovdd) sg13_hv_pmos (
  w=300.0n l=450.00n ng=1 ad=0.0 as=0.0 pd=0.0 ps=0.0 m=1
)
xr0 (vss sub_) ptap1  r=207.099
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_io_nor2_x1
//* View name: schematic
subckt sg13g2_io_nor2_x1(nq i0 i1 vdd vss)
xn0 (nq i0 vss sub_) sg13_lv_nmos (
  w=3.93u l=130.00n ng=1 ad=1.336e-12 as=1.336e-12 pd=8.54e-06 ps=8.54e-06 m=1
)
xn1 (nq i1 vss sub_) sg13_lv_nmos (
  w=3.93u l=130.00n ng=1 ad=1.336e-12 as=1.336e-12 pd=8.54e-06 ps=8.54e-06 m=1
)
xp0 (net1 i0 vdd vdd) sg13_lv_pmos (
  w=4.41u l=130.00n ng=1 ad=1.499e-12 as=1.499e-12 pd=9.5e-06 ps=9.5e-06 m=1
)
xp1 (nq i1 net1 vdd) sg13_lv_pmos (
  w=4.41u l=130.00n ng=1 ad=1.499e-12 as=1.499e-12 pd=9.5e-06 ps=9.5e-06 m=1
)
xr0 (vss sub_) ptap1  r=251.534
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_io_tie
//* View name: schematic
subckt sg13g2_io_tie(vdd vss)
xr0 (vss sub_) ptap1  r=258.978
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_io_nand2_x1
//* View name: schematic
subckt sg13g2_io_nand2_x1(nq i0 i1 vdd vss)
xp1 (nq i1 vdd vdd) sg13_lv_pmos (
  w=4.41u l=130.00n ng=1 ad=1.499e-12 as=1.499e-12 pd=9.5e-06 ps=9.5e-06 m=1
)
xp0 (nq i0 vdd vdd) sg13_lv_pmos (
  w=4.41u l=130.00n ng=1 ad=1.499e-12 as=1.499e-12 pd=9.5e-06 ps=9.5e-06 m=1
)
xn1 (net1 i0 vss sub_) sg13_lv_nmos (
  w=3.93u l=130.00n ng=1 ad=1.336e-12 as=1.336e-12 pd=8.54e-06 ps=8.54e-06 m=1
)
xn0 (nq i1 net1 sub_) sg13_lv_nmos (
  w=3.93u l=130.00n ng=1 ad=1.336e-12 as=1.336e-12 pd=8.54e-06 ps=8.54e-06 m=1
)
xr0 (vss sub_) ptap1  r=251.534
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_GateDecode
//* View name: schematic
subckt sg13g2_GateDecode(ngate pgate core en iovdd vdd vss)
xi1 (net3 en vdd vss) sg13g2_io_inv_x1 
xi4 (ngate net4 iovdd vdd vss) sg13g2_LevelUp 
xi2 (pgate net2 iovdd vdd vss) sg13g2_LevelUp 
xi3 (net4 core net3 vdd vss) sg13g2_io_nor2_x1 
xi0 (vdd vss) sg13g2_io_tie 
xi5 (net2 core en vdd vss) sg13g2_io_nand2_x1 
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_Clamp_N2N2D
//* View name: schematic
subckt sg13g2_Clamp_N2N2D(gate iovss pad)
xr0 (iovss sub_) ptap1  r=11.438
xn1 (pad gate iovss sub_) sg13_hv_nmos (
  w=8.8u l=600.0n ng=2 ad=1.672e-12 as=2.992e-12 pd=9.56e-06 ps=1.896e-05 m=1
)
xd0 (sub_ gate) dantenna  l=780.00n w=780.00n m=1
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_Clamp_P2N2D
//* View name: schematic
subckt sg13g2_Clamp_P2N2D(gate iovdd iovss pad)
xd0 (gate iovdd) dpantenna  l=480n w=480n m=1
xp1 (pad gate iovdd iovdd) sg13_hv_pmos (
  w=13.32u l=600.0n ng=2 ad=2.531e-12 as=4.529e-12 pd=1.408e-05 ps=2.8e-05 m=1
)
xp0 (pad gate iovdd iovdd) sg13_hv_pmos (
  w=13.32u l=600.0n ng=2 ad=2.531e-12 as=4.529e-12 pd=1.408e-05 ps=2.8e-05 m=1
)
xr0 (iovss sub_) ptap1  r=9.826
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_SecondaryProtection
//* View name: schematic
subckt sg13g2_SecondaryProtection(core minus pad plus)
xr0 (pad core sub_) rppd  r=586.899 l=2u w=1u
xd1 (sub_ core) dantenna  l=3.1u w=640n m=1
xr1 (minus sub_) ptap1  r=46.556
xd0 (core plus) dpantenna  l=4.98u w=640n m=1
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_LevelDown
//* View name: schematic
subckt sg13g2_LevelDown(core pad iovdd iovss vdd vss)
xp0 (vdd vdd vdd vdd) sg13_hv_pmos (
  w=4.65u l=450.00n ng=1 ad=1.581e-12 as=1.581e-12 pd=9.98e-06 ps=9.98e-06 m=1
)
xp2 (net4 net7 iovdd iovdd) sg13_hv_pmos (
  w=4.6u l=450.00n ng=2 ad=8.74e-13 as=1.564e-12 pd=5.36e-06 ps=1.056e-05 m=1
)
xp3 (net7 net1 iovdd iovdd) sg13_hv_pmos (
  w=4.6u l=450.00n ng=2 ad=8.74e-13 as=1.564e-12 pd=5.36e-06 ps=1.056e-05 m=1
)
xn3 (net4 net7 iovss sub_) sg13_hv_nmos (
  w=1.3u l=450.00n ng=1 ad=4.42e-13 as=4.42e-13 pd=3.28e-06 ps=3.28e-06 m=1
)
xn4 (net7 net1 iovss sub_) sg13_hv_nmos (
  w=1.3u l=450.00n ng=1 ad=4.42e-13 as=4.42e-13 pd=3.28e-06 ps=3.28e-06 m=1
)
xn2 (net2 net4 vss sub_) sg13_hv_nmos (
  w=2.65u l=450.00n ng=1 ad=9.01e-13 as=9.01e-13 pd=5.98e-06 ps=5.98e-06 m=1
)
xn0 (vdd net7 net2 sub_) sg13_hv_nmos (
  w=2.65u l=450.00n ng=1 ad=9.01e-13 as=9.01e-13 pd=5.98e-06 ps=5.98e-06 m=1
)
xn1 (core net2 vss sub_) sg13_lv_nmos (
  w=2.75u l=130.00n ng=1 ad=9.35e-13 as=9.35e-13 pd=6.18e-06 ps=6.18e-06 m=1
)
xp1 (core net2 vdd vdd) sg13_lv_pmos (
  w=4.75u l=130.00n ng=1 ad=1.615e-12 as=1.615e-12 pd=1.018e-05 ps=1.018e-05 m=1
)
xr1 (iovss sub_) ptap1  r=199.584
xr0 (vss sub_) ptap1  r=127.332
xi0 (net1 iovss pad iovdd) sg13g2_SecondaryProtection 
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_IOPadInOut4mA
//* View name: schematic
subckt sg13g2_IOPadInOut4mA(pad c2p p2c c2p_en vdd vss iovdd iovss)
xi1 (pad iovdd iovss) sg13g2_DCPDiode 
xi2 (net2 net1 c2p c2p_en iovdd vdd vss) sg13g2_GateDecode 
xi3 (net2 iovss pad) sg13g2_Clamp_N2N2D 
xi0 (net1 iovdd iovss pad) sg13g2_Clamp_P2N2D 
xi4 (p2c pad iovdd iovss vdd vss) sg13g2_LevelDown 
xr0 (vss sub_) ptap1  r=26.933
xr1 (iovss sub_) ptap1  r=214.134m
xi5 (iovss pad iovdd) sg13g2_DCNDiode 
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_Clamp_P15N15D
//* View name: schematic
subckt sg13g2_Clamp_P15N15D(gate iovdd iovss pad)
xd0 (gate iovdd) dpantenna  l=780.00n w=780.00n m=1
xr0 (iovss sub_) ptap1  r=9.826
xp1 (pad gate iovdd iovdd) sg13_hv_pmos (
  w=99.9u l=600.0n ng=15 ad=1.998e-11 as=1.998e-11 pd=0.0001126 ps=0.0001126 m=1
)
xp0 (pad gate iovdd iovdd) sg13_hv_pmos (
  w=99.9u l=600.0n ng=15 ad=1.998e-11 as=1.998e-11 pd=0.0001126 ps=0.0001126 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_Clamp_N15N15D
//* View name: schematic
subckt sg13g2_Clamp_N15N15D(gate iovss pad)
xr0 (iovss sub_) ptap1  r=11.438
xn0 (pad gate iovss sub_) sg13_hv_nmos (
  w=66.000u l=600.0n ng=15 ad=1.32e-11 as=1.32e-11 pd=7.64e-05 ps=7.64e-05 m=1
)
xd0 (sub_ gate) dantenna  l=780.00n w=780.00n m=1
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_IOPadInOut30mA
//* View name: schematic
subckt sg13g2_IOPadInOut30mA(pad c2p p2c c2p_en vdd vss iovdd iovss)
xi4 (p2c pad iovdd iovss vdd vss) sg13g2_LevelDown 
xi1 (pad iovdd iovss) sg13g2_DCPDiode 
xi0 (net1 iovdd iovss pad) sg13g2_Clamp_P15N15D 
xi5 (iovss pad iovdd) sg13g2_DCNDiode 
xi3 (net2 iovss pad) sg13g2_Clamp_N15N15D 
xr0 (vss sub_) ptap1  r=26.746
xr1 (iovss sub_) ptap1  r=214.165m
xi2 (net2 net1 c2p c2p_en iovdd vdd vss) sg13g2_GateDecode 
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_LevelUpInv
//* View name: schematic
subckt sg13g2_LevelUpInv(o i iovdd vdd vss)
xn1 (net2 i vss sub_) sg13_lv_nmos (
  w=2.75u l=130.00n ng=1 ad=9.35e-13 as=9.35e-13 pd=6.18e-06 ps=6.18e-06 m=1
)
xp3 (net2 i vdd vdd) sg13_lv_pmos (
  w=4.75u l=130.00n ng=1 ad=1.615e-12 as=1.615e-12 pd=1.018e-05 ps=1.018e-05 m=1
)
xn0 (o net4 vss sub_) sg13_hv_nmos (
  w=1.9u l=450.00n ng=1 ad=0.0 as=0.0 pd=0.0 ps=0.0 m=1
)
xn3 (net4 net2 vss sub_) sg13_hv_nmos (
  w=1.9u l=450.00n ng=1 ad=0.0 as=0.0 pd=0.0 ps=0.0 m=1
)
xn2 (net3 i vss sub_) sg13_hv_nmos (
  w=1.9u l=450.00n ng=1 ad=0.0 as=0.0 pd=0.0 ps=0.0 m=1
)
xp0 (o net4 iovdd iovdd) sg13_hv_pmos (
  w=3.9u l=450.00n ng=1 ad=1.326e-12 as=1.326e-12 pd=8.48e-06 ps=8.48e-06 m=1
)
xp1 (net3 net4 iovdd iovdd) sg13_hv_pmos (
  w=300.0n l=450.00n ng=1 ad=1.02e-13 as=1.02e-13 pd=1.28e-06 ps=1.28e-06 m=1
)
xp2 (net4 net3 iovdd iovdd) sg13_hv_pmos (
  w=300.0n l=450.00n ng=1 ad=0.0 as=0.0 pd=0.0 ps=0.0 m=1
)
xr0 (vss sub_) ptap1  r=190.268
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_GateLevelUpInv
//* View name: schematic
subckt sg13g2_GateLevelUpInv(ngate pgate iovdd core vdd vss)
xi1 (pgate core iovdd vdd vss) sg13g2_LevelUpInv 
xi0 (ngate core iovdd vdd vss) sg13g2_LevelUpInv 
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_IOPadOut4mA
//* View name: schematic
subckt sg13g2_IOPadOut4mA(pad c2p vdd vss iovdd iovss)
xi2 (net2 net1 iovdd c2p vdd vss) sg13g2_GateLevelUpInv 
xi0 (net1 iovdd iovss pad) sg13g2_Clamp_P2N2D 
xi3 (net2 iovss pad) sg13g2_Clamp_N2N2D 
xi4 (iovss pad iovdd) sg13g2_DCNDiode 
xi1 (pad iovdd iovss) sg13g2_DCPDiode 
xr1 (iovss sub_) ptap1  r=212.747m
xr0 (vss sub_) ptap1  r=24.125
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_IOPadOut30mA
//* View name: schematic
subckt sg13g2_IOPadOut30mA(pad c2p vdd vss iovdd iovss)
xi2 (net2 net1 iovdd c2p vdd vss) sg13g2_GateLevelUpInv 
xi1 (net1 iovdd iovss pad) sg13g2_Clamp_P15N15D 
xi3 (net2 iovss pad) sg13g2_Clamp_N15N15D 
xi4 (iovss pad iovdd) sg13g2_DCNDiode 
xi0 (pad iovdd iovss) sg13g2_DCPDiode 
xr0 (vss sub_) ptap1  r=24.125
xr1 (iovss sub_) ptap1  r=214.165m
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_IOPadIn
//* View name: schematic
subckt sg13g2_IOPadIn(pad p2c vdd vss iovdd iovss)
xi0 (p2c pad iovdd iovss vdd vss) sg13g2_LevelDown 
xi2 (iovss pad iovdd) sg13g2_DCNDiode 
xi1 (pad iovdd iovss) sg13g2_DCPDiode 
xr0 (vss sub_) ptap1  r=24.69
xr1 (iovss sub_) ptap1  r=173.674m
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_Clamp_P8N8D
//* View name: schematic
subckt sg13g2_Clamp_P8N8D(gate iovdd iovss pad)
xr0 (iovss sub_) ptap1  r=9.826
xp2 (pad gate iovdd iovdd) sg13_hv_pmos (
  w=53.28u l=600.0n ng=8 ad=1.012e-11 as=1.212e-11 pd=5.632e-05 ps=7.024e-05 m=1
)
xp0 (pad gate iovdd iovdd) sg13_hv_pmos (
  w=53.28u l=600.0n ng=8 ad=1.012e-11 as=1.212e-11 pd=5.632e-05 ps=7.024e-05 m=1
)
xd0 (gate iovdd) dpantenna  l=480n w=480n m=1
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_Clamp_N8N8D
//* View name: schematic
subckt sg13g2_Clamp_N8N8D(gate iovss pad)
xr0 (iovss sub_) ptap1  r=11.438
xn0 (pad gate iovss sub_) sg13_hv_nmos (
  w=35.2u l=600.0n ng=8 ad=6.688e-12 as=8.008e-12 pd=3.824e-05 ps=4.764e-05 m=1
)
xd0 (sub_ gate) dantenna  l=780.00n w=780.00n m=1
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_IOPadInOut16mA
//* View name: schematic
subckt sg13g2_IOPadInOut16mA(pad c2p p2c c2p_en vdd vss iovdd iovss)
xi1 (pad iovdd iovss) sg13g2_DCPDiode 
xi2 (net2 net1 c2p c2p_en iovdd vdd vss) sg13g2_GateDecode 
xi5 (iovss pad iovdd) sg13g2_DCNDiode 
xi0 (net1 iovdd iovss pad) sg13g2_Clamp_P8N8D 
xi4 (p2c pad iovdd iovss vdd vss) sg13g2_LevelDown 
xi3 (net2 iovss pad) sg13g2_Clamp_N8N8D 
xr0 (vss sub_) ptap1  r=26.933
xr1 (iovss sub_) ptap1  r=207.756m
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_IOPadOut16mA
//* View name: schematic
subckt sg13g2_IOPadOut16mA(pad c2p vdd vss iovdd iovss)
xi2 (net2 net1 iovdd c2p vdd vss) sg13g2_GateLevelUpInv 
xi0 (net1 iovdd iovss pad) sg13g2_Clamp_P8N8D 
xi4 (iovss pad iovdd) sg13g2_DCNDiode 
xi3 (net2 iovss pad) sg13g2_Clamp_N8N8D 
xi1 (pad iovdd iovss) sg13g2_DCPDiode 
xr0 (vss sub_) ptap1  r=23.888
xr1 (iovss sub_) ptap1  r=208.667m
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_IOPadTriOut4mA
//* View name: schematic
subckt sg13g2_IOPadTriOut4mA(pad c2p c2p_en vdd vss iovdd iovss)
xi2 (net2 net1 c2p c2p_en iovdd vdd vss) sg13g2_GateDecode 
xi4 (iovss pad iovdd) sg13g2_DCNDiode 
xi3 (net2 iovss pad) sg13g2_Clamp_N2N2D 
xi0 (net1 iovdd iovss pad) sg13g2_Clamp_P2N2D 
xi1 (pad iovdd iovss) sg13g2_DCPDiode 
xr0 (vss sub_) ptap1  r=24.567
xr1 (iovss sub_) ptap1  r=208.667m
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_IOPadTriOut16mA
//* View name: schematic
subckt sg13g2_IOPadTriOut16mA(pad c2p c2p_en vdd vss iovdd iovss)
xi2 (net2 net1 c2p c2p_en iovdd vdd vss) sg13g2_GateDecode 
xi0 (net1 iovdd iovss pad) sg13g2_Clamp_P8N8D 
xi3 (net2 iovss pad) sg13g2_Clamp_N8N8D 
xi4 (iovss pad iovdd) sg13g2_DCNDiode 
xi1 (pad iovdd iovss) sg13g2_DCPDiode 
xr0 (vss sub_) ptap1  r=24.897
xr1 (iovss sub_) ptap1  r=208.211m
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_IOPadTriOut30mA
//* View name: schematic
subckt sg13g2_IOPadTriOut30mA(pad c2p c2p_en vdd vss iovdd iovss)
xi2 (net2 net1 c2p c2p_en iovdd vdd vss) sg13g2_GateDecode 
xi4 (iovss pad iovdd) sg13g2_DCNDiode 
xi3 (net2 iovss pad) sg13g2_Clamp_N15N15D 
xi0 (net1 iovdd iovss pad) sg13g2_Clamp_P15N15D 
xi1 (pad iovdd iovss) sg13g2_DCPDiode 
xr0 (vss sub_) ptap1  r=24.649
xr1 (iovss sub_) ptap1  r=208.667m
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_Corner
//* View name: schematic
subckt sg13g2_Corner(vdd vss iovdd iovss)
xr1 (vss sub_) ptap1  r=35.383
xr0 (iovss sub_) ptap1  r=93.041m
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_Filler4000
//* View name: schematic
subckt sg13g2_Filler4000(vdd vss iovdd iovss)
xr1 (vss sub_) ptap1  r=63.078
xr0 (iovss sub_) ptap1  r=625.742m
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_Filler1000
//* View name: schematic
subckt sg13g2_Filler1000(vdd vss iovdd iovss)
xr1 (vss sub_) ptap1  r=162.013
xr0 (iovss sub_) ptap1  r=2.443
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_Filler200
//* View name: schematic
subckt sg13g2_Filler200(vdd vss iovdd iovss)
xr1 (vss sub_) ptap1  r=246.192
xr0 (iovss sub_) ptap1  r=14.724
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_Filler400
//* View name: schematic
subckt sg13g2_Filler400(vdd vss iovdd iovss)
xr1 (vss sub_) ptap1  r=246.192
xr0 (iovss sub_) ptap1  r=6.246
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_Filler10000
//* View name: schematic
subckt sg13g2_Filler10000(vdd vss iovdd iovss)
xr1 (vss sub_) ptap1  r=32.364
xr0 (iovss sub_) ptap1  r=253.731m
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_Clamp_P20N0D
//* View name: schematic
subckt sg13g2_Clamp_P20N0D(iovdd iovss pad)
xp1 (pad net2 iovdd iovdd) sg13_hv_pmos (
  w=133.2u l=600.0n ng=20 ad=2.531e-11 as=2.731e-11 pd=0.0001408 ps=0.0001547 m=1
)
xp0 (pad net2 iovdd iovdd) sg13_hv_pmos (
  w=133.2u l=600.0n ng=20 ad=2.531e-11 as=2.731e-11 pd=0.0001408 ps=0.0001547 m=1
)
xr0 (net2 iovdd iovdd) rppd  r=6.768k l=12.9u w=500n
xr1 (iovss sub_) ptap1  r=9.826
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_Clamp_N20N0D
//* View name: schematic
subckt sg13g2_Clamp_N20N0D(iovss pad)
xn0 (pad net2 iovss sub_) sg13_hv_nmos (
  w=88.000u l=600.0n ng=20 ad=1.672e-11 as=1.804e-11 pd=9.56e-05 ps=0.000105 m=1
)
xr1 (iovss sub_) ptap1  r=11.438
xr0 (iovss net2 sub_) rppd  r=1.959k l=3.54u w=500n
ends
//* End of subcircuit definition.

//* Library name: sg13g2_io
//* Cell name: sg13g2_IOPadAnalog
//* View name: schematic
subckt sg13g2_IOPadAnalog(pad padres vdd vss iovdd iovss)
xi0 (iovdd iovss pad) sg13g2_Clamp_P20N0D 
xi5 (iovss pad iovdd) sg13g2_DCNDiode 
xi2 (pad iovdd iovss) sg13g2_DCPDiode 
xi3 (padres iovss pad iovdd) sg13g2_SecondaryProtection 
xi4 (iovss pad) sg13g2_Clamp_N20N0D 
xr0 (vss sub_) ptap1  r=22.579
xr1 (iovss sub_) ptap1  r=214.8m
ends
//* End of subcircuit definition.
