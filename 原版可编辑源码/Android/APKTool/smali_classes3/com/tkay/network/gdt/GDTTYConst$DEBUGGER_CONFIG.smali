.class public Lcom/tkay/network/gdt/GDTTYConst$DEBUGGER_CONFIG;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/network/gdt/GDTTYConst;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "DEBUGGER_CONFIG"
.end annotation


# static fields
.field public static final GDT_INTERSTITIAL:I = 0x1

.field public static final GDT_INTERSTITIAL_FULL_SCREEN:I = 0x2

.field public static final GDT_NATIVE_DRAW_SELF_RENDER:I = 0x4

.field public static final GDT_NATIVE_DRAW_TEMPLATE:I = 0x3

.field public static final GDT_NATIVE_SELF_RENDER:I = 0x2

.field public static final GDT_NATIVE_TEMPLATE:I = 0x1

.field public static final GDT_NETWORK:I = 0x8


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
