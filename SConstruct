VT = Environment()
VT.VariantDir( "obj", "src", duplicate = 0 )
sources = Glob("obj/*.cpp")
obj_list = VT.Object( source = sources )
VT.Program ( target = "bin/VTest", source = obj_list )
