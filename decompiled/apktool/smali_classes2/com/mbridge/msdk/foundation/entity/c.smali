.class public final Lcom/mbridge/msdk/foundation/entity/c;
.super Ljava/lang/Object;
.source "BidCacheBean.java"


# instance fields
.field private a:Ljava/lang/String;

.field private b:I

.field private c:I

.field private d:I

.field private e:Ljava/lang/String;

.field private f:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private g:J

.field private h:J

.field private i:J


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 7
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/c;->a:Ljava/lang/String;

    .line 11
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/c;->e:Ljava/lang/String;

    const-wide/16 v0, 0x0

    .line 13
    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/entity/c;->g:J

    .line 14
    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/entity/c;->h:J

    .line 15
    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/entity/c;->i:J

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 38
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/c;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 22
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/c;->d:I

    return-void
.end method

.method public final a(J)V
    .locals 0

    .line 75
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/entity/c;->g:J

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 42
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/c;->a:Ljava/lang/String;

    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 67
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/c;->f:Ljava/util/List;

    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/c;->e:Ljava/lang/String;

    return-object v0
.end method

.method public final b(I)V
    .locals 0

    .line 34
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/c;->c:I

    return-void
.end method

.method public final b(J)V
    .locals 0

    .line 83
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/entity/c;->h:J

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 50
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/c;->e:Ljava/lang/String;

    return-void
.end method

.method public final c()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 63
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/c;->f:Ljava/util/List;

    return-object v0
.end method

.method public final c(I)V
    .locals 0

    .line 59
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/c;->b:I

    return-void
.end method

.method public final c(J)V
    .locals 0

    .line 91
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/entity/c;->i:J

    return-void
.end method

.method public final d()J
    .locals 2

    .line 79
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/entity/c;->h:J

    return-wide v0
.end method

.method public final e()J
    .locals 2

    .line 87
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/entity/c;->i:J

    return-wide v0
.end method
