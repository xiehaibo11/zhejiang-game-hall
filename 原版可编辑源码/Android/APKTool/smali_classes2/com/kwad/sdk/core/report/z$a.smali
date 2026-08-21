.class public Lcom/kwad/sdk/core/report/z$a;
.super Lcom/kwad/sdk/core/response/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/report/z;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field public asJ:I

.field public asK:Ljava/lang/String;

.field public asL:I

.field public asM:I

.field public asN:I

.field public asO:Lorg/json/JSONObject;

.field public asP:I

.field public asQ:I

.field public asR:Lcom/kwad/sdk/core/report/AdTrackLog;

.field public duration:J

.field public showLiveStatus:I

.field public showLiveStyle:I

.field public templateId:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 3

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/sdk/core/report/z$a;->asJ:I

    const-wide/16 v1, -0x1

    iput-wide v1, p0, Lcom/kwad/sdk/core/report/z$a;->duration:J

    iput v0, p0, Lcom/kwad/sdk/core/report/z$a;->showLiveStatus:I

    iput v0, p0, Lcom/kwad/sdk/core/report/z$a;->showLiveStyle:I

    return-void
.end method


# virtual methods
.method public afterToJson(Lorg/json/JSONObject;)V
    .locals 6

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterToJson(Lorg/json/JSONObject;)V

    iget v0, p0, Lcom/kwad/sdk/core/report/z$a;->asJ:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    const-string v2, "shield_reason"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_0
    iget-wide v2, p0, Lcom/kwad/sdk/core/report/z$a;->duration:J

    const-wide/16 v4, -0x1

    cmp-long v0, v2, v4

    if-eqz v0, :cond_1

    const-string v0, "duration"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1
    iget v0, p0, Lcom/kwad/sdk/core/report/z$a;->showLiveStatus:I

    if-eq v0, v1, :cond_2

    const-string v2, "show_live_status"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    iget v0, p0, Lcom/kwad/sdk/core/report/z$a;->showLiveStyle:I

    if-eq v0, v1, :cond_3

    const-string v1, "show_live_style"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$a;->asR:Lcom/kwad/sdk/core/report/AdTrackLog;

    if-eqz v0, :cond_4

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/AdTrackLog;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ad_track_log"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget-object v0, p0, Lcom/kwad/sdk/core/report/z$a;->asO:Lorg/json/JSONObject;

    if-eqz v0, :cond_5

    :try_start_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iget-object v2, p0, Lcom/kwad/sdk/core/report/z$a;->asO:Lorg/json/JSONObject;

    invoke-virtual {v2, v1}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    :cond_5
    return-void
.end method

.method public final c(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/core/report/AdTrackLog;
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    :cond_0
    const-class v1, Lcom/kwad/sdk/service/a/f;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/f;

    if-eqz v1, :cond_1

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/f;->xN()Z

    move-result v1

    if-eqz v1, :cond_1

    new-instance v0, Lcom/kwad/sdk/core/report/AdTrackLog;

    invoke-direct {v0, p2, p3}, Lcom/kwad/sdk/core/report/AdTrackLog;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/kwad/sdk/core/report/z$a;->asR:Lcom/kwad/sdk/core/report/AdTrackLog;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/report/AdTrackLog;->bindABParams(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object p1, p0, Lcom/kwad/sdk/core/report/z$a;->asR:Lcom/kwad/sdk/core/report/AdTrackLog;

    return-object p1

    :cond_1
    return-object v0
.end method
