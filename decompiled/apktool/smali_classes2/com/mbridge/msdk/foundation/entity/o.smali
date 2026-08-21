.class public final Lcom/mbridge/msdk/foundation/entity/o;
.super Ljava/lang/Object;
.source "VideoBean.java"


# instance fields
.field private a:Ljava/lang/String;

.field private b:J

.field private c:I

.field private d:I

.field private e:J

.field private f:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()J
    .locals 2

    .line 15
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/entity/o;->e:J

    return-wide v0
.end method

.method public final a(I)V
    .locals 0

    .line 43
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/o;->c:I

    return-void
.end method

.method public final a(J)V
    .locals 0

    .line 19
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/entity/o;->e:J

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 27
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/o;->a:Ljava/lang/String;

    return-void
.end method

.method public final b()J
    .locals 2

    .line 31
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/entity/o;->b:J

    return-wide v0
.end method

.method public final b(I)V
    .locals 0

    .line 51
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/o;->d:I

    return-void
.end method

.method public final b(J)V
    .locals 0

    .line 35
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/entity/o;->b:J

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 59
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/o;->f:Ljava/lang/String;

    return-void
.end method

.method public final c()I
    .locals 1

    .line 39
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/o;->c:I

    return v0
.end method

.method public final d()I
    .locals 1

    .line 47
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/o;->d:I

    return v0
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    .line 55
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/o;->f:Ljava/lang/String;

    return-object v0
.end method
