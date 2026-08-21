.class public final Lcom/tkay/core/common/f/o;
.super Ljava/lang/Object;


# instance fields
.field private a:Ljava/lang/String;

.field private b:J


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private b()J
    .locals 2

    .line 16
    iget-wide v0, p0, Lcom/tkay/core/common/f/o;->b:J

    return-wide v0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 8
    iget-object v0, p0, Lcom/tkay/core/common/f/o;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final a(J)V
    .locals 0

    .line 20
    iput-wide p1, p0, Lcom/tkay/core/common/f/o;->b:J

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 12
    iput-object p1, p0, Lcom/tkay/core/common/f/o;->a:Ljava/lang/String;

    return-void
.end method
