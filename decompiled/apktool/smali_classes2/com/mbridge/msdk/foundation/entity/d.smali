.class public final Lcom/mbridge/msdk/foundation/entity/d;
.super Ljava/lang/Object;
.source "BidTokenRuleBean.java"


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:I

.field private g:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 5
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/d;->a:Ljava/lang/String;

    .line 6
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/d;->b:Ljava/lang/String;

    .line 7
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/d;->c:Ljava/lang/String;

    .line 8
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/d;->d:Ljava/lang/String;

    .line 9
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/entity/d;->e:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 23
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/d;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 59
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/d;->f:I

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 19
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/d;->a:Ljava/lang/String;

    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 31
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/d;->c:Ljava/lang/String;

    return-object v0
.end method

.method public final b(I)V
    .locals 0

    .line 67
    iput p1, p0, Lcom/mbridge/msdk/foundation/entity/d;->g:I

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 27
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/d;->b:Ljava/lang/String;

    return-void
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/d;->d:Ljava/lang/String;

    return-object v0
.end method

.method public final c(Ljava/lang/String;)V
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/d;->c:Ljava/lang/String;

    return-void
.end method

.method public final d()I
    .locals 1

    .line 63
    iget v0, p0, Lcom/mbridge/msdk/foundation/entity/d;->g:I

    return v0
.end method

.method public final d(Ljava/lang/String;)V
    .locals 0

    .line 43
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/d;->d:Ljava/lang/String;

    return-void
.end method

.method public final e(Ljava/lang/String;)V
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/d;->e:Ljava/lang/String;

    return-void
.end method
