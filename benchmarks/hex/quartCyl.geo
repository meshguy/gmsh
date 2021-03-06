Mesh.Algorithm = 9; //8 = delquad or 9= 2D R-tree
Mesh.Algorithm3D = 9; // 3D R-tree
Mesh.Recombine3DAll = 1; 
Mesh.Lloyd = 10;
Mesh.Smoothing = 0;

c1 = 0.1;
c2 = 0.05;
Point(1) = {0, 0, 0.5, c2};
Point(2) = {0, 0, -0.5, c2};
Point(3) = {0, 1, -0.5, c1};
Point(4) = {0, 1, 0.5, c1};
Point(5) = {-1, 0, 0.5, c1};
Point(6) = {-1, 0, -0.5, c1};
Point(7) = {-0.5, 0, 0.5, c2};
Point(8) = {-0.5, 0, -0.5, c2};
Point(9) = {0, 0.5, -0.5, c2};
Point(10) = {0, 0.5, 0.5, c2};
Circle(1) = {7, 1, 10};
Circle(2) = {8, 2, 9};
Circle(3) = {5, 1, 4};
Circle(4) = {6, 2, 3};
Line(5) = {10, 4};
Line(6) = {3, 9};
Line(7) = {9, 10};
Line(8) = {4, 3};
Line(9) = {7, 5};
Line(10) = {6, 8};
Line(11) = {6, 5};
Line(12) = {8, 7};
Line Loop(13) = {5, -3, -9, 1};
Plane Surface(14) = {13};
Line Loop(15) = {6, -2, -10, 4};
Plane Surface(16) = {15};
Line Loop(17) = {7, 5, 8, 6};
Plane Surface(18) = {17};
Line Loop(19) = {12, 9, -11, 10};
Plane Surface(20) = {19};
Line Loop(21) = {1, -7, -2, 12};
Surface(22) = {21};
Line Loop(23) = {8, -4, 11, 3};
Surface(24) = {23};

Surface Loop(25) = {14, 16, 22, 20, 18, 24};
Volume(26) = {25};

