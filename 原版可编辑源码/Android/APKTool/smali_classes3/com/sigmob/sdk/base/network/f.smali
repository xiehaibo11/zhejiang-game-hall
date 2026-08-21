.class public Lcom/sigmob/sdk/base/network/f;
.super Lcom/czhj/volley/Request;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/network/f$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/volley/Request<",
        "Lcom/czhj/volley/NetworkResponse;",
        ">;"
    }
.end annotation


# static fields
.field private static final a:I

.field private static b:I


# instance fields
.field private final c:Lcom/sigmob/sdk/base/network/f$a;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;IILcom/sigmob/sdk/base/network/f$a;)V
    .locals 2

    const/4 v0, 0x0

    invoke-direct {p0, v0, p1, p4}, Lcom/czhj/volley/Request;-><init>(ILjava/lang/String;Lcom/czhj/volley/Response$ErrorListener;)V

    iput-object p4, p0, Lcom/sigmob/sdk/base/network/f;->c:Lcom/sigmob/sdk/base/network/f$a;

    const/4 p1, 0x3

    if-gez p2, :cond_0

    move p2, v0

    goto :goto_0

    :cond_0
    if-le p2, p1, :cond_1

    move p2, p1

    :cond_1
    :goto_0
    const/4 p1, 0x1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/network/f;->setShouldRetryServerErrors(Z)Lcom/czhj/volley/Request;

    new-instance p1, Lcom/czhj/volley/DefaultRetryPolicy;

    const/16 p4, 0x2710

    const/4 v1, 0x0

    invoke-direct {p1, p3, p4, p2, v1}, Lcom/czhj/volley/DefaultRetryPolicy;-><init>(IIIF)V

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/network/f;->setRetryPolicy(Lcom/czhj/volley/RetryPolicy;)Lcom/czhj/volley/Request;

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/network/f;->setShouldCache(Z)Lcom/czhj/volley/Request;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;ILcom/sigmob/sdk/base/network/f$a;)V
    .locals 1

    const/16 v0, 0x2710

    invoke-direct {p0, p1, p2, v0, p3}, Lcom/sigmob/sdk/base/network/f;-><init>(Ljava/lang/String;IILcom/sigmob/sdk/base/network/f$a;)V

    return-void
.end method

.method public static a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Z)I
    .locals 5

    const/4 v0, -0x1

    if-eqz p0, :cond_7

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_2

    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return v0

    :cond_1
    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdTracker(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_6

    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_1

    :cond_2
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_5

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/common/g;

    if-eqz p2, :cond_3

    const-string v2, "js"

    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/common/g;->a(Ljava/lang/String;)V

    :cond_3
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v2

    instance-of v3, v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v3, :cond_4

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v3, "_PLAYFIRSTFRAME_"

    const-string v4, "1"

    invoke-virtual {v2, v3, v4}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    invoke-static {v0, p0, v1}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/common/g;Lcom/sigmob/sdk/base/models/BaseAdUnit;Z)V

    goto :goto_0

    :cond_5
    return v1

    :cond_6
    :goto_1
    const/4 p0, -0x2

    return p0

    :cond_7
    :goto_2
    return v0
.end method

.method public static a()V
    .locals 4

    const-wide/16 v0, 0xbb8

    invoke-static {v0, v1}, Lcom/sigmob/sdk/base/common/g;->b(J)V

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getAdTrackerRetryQueue()Lcom/czhj/sdk/common/network/SigmobRequestQueue;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->cancelAll()V

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->z()J

    move-result-wide v0

    const/16 v2, 0xbb8

    invoke-static {v2, v0, v1}, Lcom/sigmob/sdk/base/common/g;->a(IJ)Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/common/g;

    const/4 v2, 0x0

    const/4 v3, 0x0

    invoke-static {v1, v2, v3}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/common/g;Lcom/sigmob/sdk/base/models/BaseAdUnit;Z)V

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->z()J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/sigmob/sdk/base/common/g;->a(J)V

    return-void
.end method

.method public static a(Lcom/sigmob/sdk/base/common/g;Lcom/sigmob/sdk/base/models/BaseAdUnit;Z)V
    .locals 1

    const/4 v0, 0x1

    invoke-static {p0, p1, p2, v0, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/common/g;Lcom/sigmob/sdk/base/models/BaseAdUnit;ZZZ)V

    return-void
.end method

.method public static a(Lcom/sigmob/sdk/base/common/g;Lcom/sigmob/sdk/base/models/BaseAdUnit;ZZZ)V
    .locals 10

    if-eqz p0, :cond_5

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/g;->i()Lcom/sigmob/sdk/base/common/g$a;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/g$a;->a:Lcom/sigmob/sdk/base/common/g$a;

    if-ne v0, v1, :cond_5

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/g;->m()Z

    move-result v0

    if-nez v0, :cond_5

    invoke-static {}, Lcom/sigmob/sdk/Sigmob;->getInstance()Lcom/sigmob/sdk/Sigmob;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/Sigmob;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/g;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->macroProcess(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->macroProcess(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :cond_0
    if-nez p2, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/g;->l()V

    :cond_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/g;->f()Ljava/lang/Long;

    move-result-object p2

    const/4 v1, 0x0

    if-eqz p2, :cond_2

    const/4 p2, 0x1

    move v6, p2

    goto :goto_0

    :cond_2
    move v6, v1

    :goto_0
    new-instance p2, Lcom/sigmob/sdk/base/network/f;

    if-eqz v6, :cond_3

    goto :goto_1

    :cond_3
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/g;->j()Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    :goto_1
    move v8, v1

    new-instance v9, Lcom/sigmob/sdk/base/network/f$1;

    move-object v1, v9

    move v2, p4

    move-object v3, p0

    move-object v4, v0

    move-object v5, p1

    move v7, p3

    invoke-direct/range {v1 .. v7}, Lcom/sigmob/sdk/base/network/f$1;-><init>(ZLcom/sigmob/sdk/base/common/g;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;ZZ)V

    invoke-direct {p2, v0, v8, v9}, Lcom/sigmob/sdk/base/network/f;-><init>(Ljava/lang/String;ILcom/sigmob/sdk/base/network/f$a;)V

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getAdTrackerRetryQueue()Lcom/czhj/sdk/common/network/SigmobRequestQueue;

    move-result-object p3

    if-nez p3, :cond_4

    const/4 p2, 0x0

    invoke-static {p0, v0, p1, p2}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/common/g;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/czhj/volley/VolleyError;)V

    const-string p0, "RequestQueue is null"

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void

    :cond_4
    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getAdTrackerRetryQueue()Lcom/czhj/sdk/common/network/SigmobRequestQueue;

    move-result-object p0

    invoke-virtual {p0, p2}, Lcom/czhj/sdk/common/network/SigmobRequestQueue;->add(Lcom/czhj/volley/Request;)Lcom/czhj/volley/Request;

    :cond_5
    return-void
.end method

.method public static a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, p1, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;Z)V

    return-void
.end method

.method public static a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;Z)V
    .locals 4

    if-eqz p1, :cond_3

    if-eqz p0, :cond_3

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/common/a;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/common/a;->a()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdTracker(Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    if-nez p1, :cond_1

    return-void

    :cond_1
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/common/g;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v1

    instance-of v2, v1, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v2, :cond_2

    check-cast v1, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v2, "_PLAYFIRSTFRAME_"

    const-string v3, "1"

    invoke-virtual {v1, v2, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    invoke-static {v0, p0, p2}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/common/g;Lcom/sigmob/sdk/base/models/BaseAdUnit;Z)V

    goto :goto_0

    :cond_3
    :goto_1
    return-void
.end method

.method static synthetic b()I
    .locals 1

    sget v0, Lcom/sigmob/sdk/base/network/f;->b:I

    return v0
.end method


# virtual methods
.method protected a(Lcom/czhj/volley/NetworkResponse;)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/f;->mLock:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/network/f;->c:Lcom/sigmob/sdk/base/network/f$a;

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "send tracking: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/network/f;->getUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " success"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    if-eqz v1, :cond_0

    invoke-interface {v1, p1}, Lcom/sigmob/sdk/base/network/f$a;->a(Lcom/czhj/volley/NetworkResponse;)V

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public deliverError(Lcom/czhj/volley/VolleyError;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "send tracking: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/network/f;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " fail"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    invoke-super {p0, p1}, Lcom/czhj/volley/Request;->deliverError(Lcom/czhj/volley/VolleyError;)V

    return-void
.end method

.method protected synthetic deliverResponse(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/czhj/volley/NetworkResponse;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/czhj/volley/NetworkResponse;)V

    return-void
.end method

.method public getMaxLength()I
    .locals 1

    const/16 v0, 0x64

    return v0
.end method

.method protected parseNetworkResponse(Lcom/czhj/volley/NetworkResponse;)Lcom/czhj/volley/Response;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/NetworkResponse;",
            ")",
            "Lcom/czhj/volley/Response<",
            "Lcom/czhj/volley/NetworkResponse;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/czhj/volley/Response;->success(Ljava/lang/Object;Lcom/czhj/volley/Cache$Entry;)Lcom/czhj/volley/Response;

    move-result-object p1

    return-object p1
.end method
