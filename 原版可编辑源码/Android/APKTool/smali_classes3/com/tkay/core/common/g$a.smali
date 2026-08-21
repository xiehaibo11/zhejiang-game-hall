.class final Lcom/tkay/core/common/g$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/TYCustomLoadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/g;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "a"
.end annotation


# instance fields
.field a:Lcom/tkay/core/api/TYBaseAdAdapter;

.field b:J

.field final synthetic c:Lcom/tkay/core/common/g;


# direct methods
.method private constructor <init>(Lcom/tkay/core/common/g;JLcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 0

    .line 160
    iput-object p1, p0, Lcom/tkay/core/common/g$a;->c:Lcom/tkay/core/common/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 161
    iput-wide p2, p0, Lcom/tkay/core/common/g$a;->b:J

    .line 162
    iput-object p4, p0, Lcom/tkay/core/common/g$a;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/core/common/g;JLcom/tkay/core/api/TYBaseAdAdapter;B)V
    .locals 0

    .line 156
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/core/common/g$a;-><init>(Lcom/tkay/core/common/g;JLcom/tkay/core/api/TYBaseAdAdapter;)V

    return-void
.end method


# virtual methods
.method public final varargs onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V
    .locals 4

    .line 172
    iget-object v0, p0, Lcom/tkay/core/common/g$a;->c:Lcom/tkay/core/common/g;

    iget-wide v1, p0, Lcom/tkay/core/common/g$a;->b:J

    iget-object v3, p0, Lcom/tkay/core/common/g$a;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    if-eqz p1, :cond_0

    invoke-static {p1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    invoke-virtual {v0, v1, v2, v3, p1}, Lcom/tkay/core/common/g;->a(JLcom/tkay/core/api/TYBaseAdAdapter;Ljava/util/List;)V

    .line 173
    iget-object p1, p0, Lcom/tkay/core/common/g$a;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    if-eqz p1, :cond_1

    .line 174
    invoke-virtual {p1}, Lcom/tkay/core/api/TYBaseAdAdapter;->releaseLoadResource()V

    :cond_1
    return-void
.end method

.method public final onAdDataLoaded()V
    .locals 3

    .line 167
    iget-wide v0, p0, Lcom/tkay/core/common/g$a;->b:J

    iget-object v2, p0, Lcom/tkay/core/common/g$a;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/g;->a(JLcom/tkay/core/common/b/n;)V

    return-void
.end method

.method public final onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V
    .locals 5

    .line 180
    iget-object v0, p0, Lcom/tkay/core/common/g$a;->c:Lcom/tkay/core/common/g;

    iget-wide v1, p0, Lcom/tkay/core/common/g$a;->b:J

    iget-object v3, p0, Lcom/tkay/core/common/g$a;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    const-string v4, "4001"

    invoke-static {v4, p1, p2}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    .line 1145
    invoke-virtual {v3}, Lcom/tkay/core/common/b/n;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object p2

    .line 1147
    iget-boolean v3, v0, Lcom/tkay/core/common/g;->d:Z

    if-nez v3, :cond_0

    const/4 v3, 0x1

    .line 1148
    iput-boolean v3, v0, Lcom/tkay/core/common/g;->d:Z

    const/4 v0, 0x0

    .line 1150
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v3

    sub-long/2addr v3, v1

    invoke-static {p2, v0, p1, v3, v4}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILcom/tkay/core/api/AdError;J)V

    .line 1151
    sget-object v0, Lcom/tkay/core/common/b/f$i;->b:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->m:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->printStackTrace()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, v0, v1, p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 181
    :cond_0
    iget-object p1, p0, Lcom/tkay/core/common/g$a;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    if-eqz p1, :cond_1

    .line 182
    invoke-virtual {p1}, Lcom/tkay/core/api/TYBaseAdAdapter;->releaseLoadResource()V

    :cond_1
    return-void
.end method
