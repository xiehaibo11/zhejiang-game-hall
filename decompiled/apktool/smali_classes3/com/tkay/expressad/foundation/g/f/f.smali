.class public Lcom/tkay/expressad/foundation/g/f/f;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/f/e;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;",
        "Lcom/tkay/expressad/foundation/g/f/e<",
        "TT;>;"
    }
.end annotation


# instance fields
.field private a:J

.field public b:Ljava/lang/String;

.field public c:Ljava/lang/String;

.field public d:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 9
    iput-object v0, p0, Lcom/tkay/expressad/foundation/g/f/f;->b:Ljava/lang/String;

    .line 10
    iput-object v0, p0, Lcom/tkay/expressad/foundation/g/f/f;->c:Ljava/lang/String;

    const/4 v0, 0x0

    .line 11
    iput v0, p0, Lcom/tkay/expressad/foundation/g/f/f;->d:I

    return-void
.end method

.method private a(I)V
    .locals 0

    .line 57
    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/f;->d:I

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 0

    .line 49
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/f/f;->b:Ljava/lang/String;

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 0

    .line 53
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/f/f;->c:Ljava/lang/String;

    return-void
.end method

.method private static f()V
    .locals 1

    .line 61
    new-instance v0, Lcom/tkay/expressad/foundation/d/l;

    invoke-direct {v0}, Lcom/tkay/expressad/foundation/d/l;-><init>()V

    return-void
.end method

.method private static g()V
    .locals 0

    return-void
.end method

.method private static h()V
    .locals 0

    return-void
.end method


# virtual methods
.method public a()V
    .locals 0

    return-void
.end method

.method public a(JJ)V
    .locals 0

    return-void
.end method

.method public a(Lcom/tkay/expressad/foundation/g/f/a/a;)V
    .locals 0

    return-void
.end method

.method public a(Lcom/tkay/expressad/foundation/g/f/k;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/foundation/g/f/k<",
            "TT;>;)V"
        }
    .end annotation

    return-void
.end method

.method public b()V
    .locals 2

    .line 16
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/foundation/g/f/f;->a:J

    return-void
.end method

.method public c()V
    .locals 0

    return-void
.end method

.method public final d()V
    .locals 0

    return-void
.end method

.method public final e()V
    .locals 0

    return-void
.end method
