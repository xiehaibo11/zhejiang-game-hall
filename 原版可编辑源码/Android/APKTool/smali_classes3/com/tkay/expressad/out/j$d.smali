.class public final Lcom/tkay/expressad/out/j$d;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/out/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "d"
.end annotation


# instance fields
.field private a:I

.field private b:I


# direct methods
.method private constructor <init>(II)V
    .locals 0

    .line 54
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 55
    iput p1, p0, Lcom/tkay/expressad/out/j$d;->a:I

    .line 56
    iput p2, p0, Lcom/tkay/expressad/out/j$d;->b:I

    return-void
.end method

.method private a()I
    .locals 1

    .line 60
    iget v0, p0, Lcom/tkay/expressad/out/j$d;->a:I

    return v0
.end method

.method private a(I)V
    .locals 0

    .line 64
    iput p1, p0, Lcom/tkay/expressad/out/j$d;->a:I

    return-void
.end method

.method private b()I
    .locals 1

    .line 68
    iget v0, p0, Lcom/tkay/expressad/out/j$d;->b:I

    return v0
.end method

.method private b(I)V
    .locals 0

    .line 72
    iput p1, p0, Lcom/tkay/expressad/out/j$d;->b:I

    return-void
.end method
