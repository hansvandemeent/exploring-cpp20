/** @file list4210.cc */
/** Listing 42-10. Module c Exports circumference() */
export module c;
export import a;
export double circumference(double radius)
{
    return 2.0 * pi * radius;
}
