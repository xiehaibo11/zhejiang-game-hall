.class public final Lcom/tkay/expressad/foundation/d/m;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:I


# direct methods
.method private constructor <init>(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 11
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/m;->b:Ljava/lang/String;

    .line 12
    iput-object p2, p0, Lcom/tkay/expressad/foundation/d/m;->a:Ljava/lang/String;

    .line 13
    iput p3, p0, Lcom/tkay/expressad/foundation/d/m;->c:I

    return-void
.end method

.method private a()Ljava/lang/String;
    .locals 1

    .line 17
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/m;->a:Ljava/lang/String;

    return-object v0
.end method

.method private a(Ljava/lang/String;)V
    .locals 0

    .line 21
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/m;->a:Ljava/lang/String;

    return-void
.end method

.method private b()Ljava/lang/String;
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/m;->b:Ljava/lang/String;

    return-object v0
.end method

.method private b(Ljava/lang/String;)V
    .locals 0

    .line 29
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/m;->b:Ljava/lang/String;

    return-void
.end method
