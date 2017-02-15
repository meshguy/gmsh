//Core1

Point(1) = {0, 0, 0, 2};Point(100) = {0, 0, 1, 2};
Point(2) = {0, 5, 1, 2};
Point(3) = {5, 0, 1, 2};
Point(4) = {-5, 0, 1, 2};
Point(5) = {0, -5, 1, 2};
Point(6) = {0, 6, 0, 2};
Point(7) = {6, 0, 0, 2};
Point(8) = {-6, 0, 0, 2};
Point(9) = {0, -6, 0, 2};
Point(10) = {0, 8, 0, 2};
Point(11) = {8, 0, 0, 2};
Point(12) = {-8, 0, 0, 2};
Point(13) = {0, -8, 0, 2};
Circle(1) = {7,1,6};
Circle(2) = {6,1,8};
Circle(3) = {8,1,9};
Circle(4) = {9,1,7};
Circle(5) = {11,1,10};
Circle(6) = {10,1,12};
Circle(7) = {12,1,13};
Circle(8) = {13,1,11};
Line Loop(9) = {1,2,3,4};
Line Loop(10) = {5,6,7,8};
Extrude Line {2, {0.0,0.0,10}};
Extrude Line {3, {0.0,0.0,10}};
Extrude Line {4, {0.0,0.0,10}};
Extrude Line {1, {0.0,0.0,10}};
Extrude Line {5, {0.0,0.0,10}};
Extrude Line {6, {0.0,0.0,10}};
Extrude Line {7, {0.0,0.0,10}};
Extrude Line {8, {0.0,0.0,10}};
Line Loop(43) = {31,35,39,27};
Line Loop(44) = {11,15,19,23};
Plane Surface(45) = {43,44};
Plane Surface(46) = {10,9};

Surface Loop(47) = {34,-46,30,45,38,42,-26,-14,-18,-22};
Volume(100000) = {47};

//Core2

Circle(100001) = {3,100,2};
Circle(100002) = {2,100,4};
Circle(100003) = {4,100,5};
Circle(100004) = {5,100,3};
Extrude Line {100003, {0.0,0.0,15}};
Extrude Line {100004, {0.0,0.0,15}};
Extrude Line {100001, {0.0,0.0,15}};
Extrude Line {100002, {0.0,0.0,15}};
Line Loop(100021) = {100013,100017,100005,100009};
Plane Surface(100022) = {100021};
Line Loop(100023) = {100004,100001,100002,100003};
Plane Surface(100024) = {100023};

Surface Loop(100025) = {100022,100016,-100024,100012,100008,100020};
Volume(100026) = {100025};

//Air

Point(128) = {20,0,0,2};
Point(129) = {-20,0,0,2};
Point(130) = {0,20,0,2};
Point(131) = {0,-20,0,2};
Point(132) = {0,0,20,2};
Point(133) = {0,0,-20,2};
Circle(100027) = {128,1,130};
Circle(100028) = {130,1,129};
Circle(100029) = {129,1,131};
Circle(100030) = {131,1,128};
Circle(100031) = {130,1,132};
Circle(100032) = {132,1,131};
Circle(100033) = {130,1,133};
Circle(100034) = {133,1,131};
Circle(100035) = {129,1,132};
Circle(100036) = {132,1,128};
Circle(100037) = {128,1,133};
Circle(100038) = {133,1,129};

Line Loop(100039) = {100036,100027,100031};
Surface(100040) = {100039};
Line Loop(100041) = {100031,-100035,-100028};
Surface(100042) = {100041};
Line Loop(100043) = {100035,100032,-100029};
Surface(100044) = {100043};
Line Loop(100045) = {100032,100030,-100036};
Surface(100046) = {100045};
Line Loop(100047) = {100028,-100038,-100033};
Surface(100048) = {100047};
Line Loop(100049) = {100033,-100037,100027};
Surface(100050) = {100049};
Line Loop(100051) = {100037,100034,100030};
Surface(100052) = {100051};
Line Loop(100053) = {100034,-100029,-100038};
Surface(100054) = {100053};

Surface Loop(100055) = {100042,-100040,-100046,100044,-100054,100052,100050,100048};

Volume(100056) = {100055,47,100025};
