.class public final Lcom/tkay/expressad/exoplayer/i/d$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/i/f$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/i/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation


# instance fields
.field private final a:I

.field private final b:Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 38
    iput v0, p0, Lcom/tkay/expressad/exoplayer/i/d$a;->a:I

    const/4 v0, 0x0

    .line 39
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/i/d$a;->b:Ljava/lang/Object;

    return-void
.end method

.method private constructor <init>(ILjava/lang/Object;)V
    .locals 0

    .line 46
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 47
    iput p1, p0, Lcom/tkay/expressad/exoplayer/i/d$a;->a:I

    .line 48
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/i/d$a;->b:Ljava/lang/Object;

    return-void
.end method

.method private varargs b(Lcom/tkay/expressad/exoplayer/h/ae;[I)Lcom/tkay/expressad/exoplayer/i/d;
    .locals 3

    .line 53
    array-length v0, p2

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    goto :goto_0

    :cond_0
    move v2, v1

    :goto_0
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 54
    new-instance v0, Lcom/tkay/expressad/exoplayer/i/d;

    aget p2, p2, v1

    iget v1, p0, Lcom/tkay/expressad/exoplayer/i/d$a;->a:I

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/i/d$a;->b:Ljava/lang/Object;

    invoke-direct {v0, p1, p2, v1, v2}, Lcom/tkay/expressad/exoplayer/i/d;-><init>(Lcom/tkay/expressad/exoplayer/h/ae;IILjava/lang/Object;)V

    return-object v0
.end method


# virtual methods
.method public final synthetic a(Lcom/tkay/expressad/exoplayer/h/ae;[I)Lcom/tkay/expressad/exoplayer/i/f;
    .locals 3

    .line 1053
    array-length v0, p2

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    goto :goto_0

    :cond_0
    move v2, v1

    :goto_0
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 1054
    new-instance v0, Lcom/tkay/expressad/exoplayer/i/d;

    aget p2, p2, v1

    iget v1, p0, Lcom/tkay/expressad/exoplayer/i/d$a;->a:I

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/i/d$a;->b:Ljava/lang/Object;

    invoke-direct {v0, p1, p2, v1, v2}, Lcom/tkay/expressad/exoplayer/i/d;-><init>(Lcom/tkay/expressad/exoplayer/h/ae;IILjava/lang/Object;)V

    return-object v0
.end method
