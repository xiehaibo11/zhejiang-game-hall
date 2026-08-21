.class final Lcom/kwad/components/ad/splashscreen/c/a/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/splashscreen/c/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Eq:Lcom/kwad/components/ad/splashscreen/c/a/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/a/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/a/c$1;->Eq:Lcom/kwad/components/ad/splashscreen/c/a/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final dJ()V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/report/z$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$a;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/c$1;->Eq:Lcom/kwad/components/ad/splashscreen/c/a/c;

    invoke-static {v1}, Lcom/kwad/components/ad/splashscreen/c/a/c;->a(Lcom/kwad/components/ad/splashscreen/c/a/c;)Lcom/kwad/components/ad/splashscreen/h;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/c$1;->Eq:Lcom/kwad/components/ad/splashscreen/c/a/c;

    invoke-static {v1}, Lcom/kwad/components/ad/splashscreen/c/a/c;->b(Lcom/kwad/components/ad/splashscreen/c/a/c;)Lcom/kwad/components/ad/splashscreen/h;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    invoke-virtual {v1}, Lcom/kwad/sdk/utils/bi;->getTime()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/sdk/core/report/z$a;->duration:J

    :cond_0
    new-instance v1, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/j;->ch(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/report/j;->a(Lcom/kwad/sdk/core/report/z$a;)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    const/4 v1, 0x6

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->cm(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/c$1;->Eq:Lcom/kwad/components/ad/splashscreen/c/a/c;

    invoke-static {v1}, Lcom/kwad/components/ad/splashscreen/c/a/c;->c(Lcom/kwad/components/ad/splashscreen/c/a/c;)Lcom/kwad/components/ad/splashscreen/h;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x0

    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c$1;->Eq:Lcom/kwad/components/ad/splashscreen/c/a/c;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/a/c;->d(Lcom/kwad/components/ad/splashscreen/c/a/c;)Lcom/kwad/components/ad/splashscreen/h;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/h;->kI()V

    return-void
.end method

.method public final kV()V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/report/z$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$a;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/c$1;->Eq:Lcom/kwad/components/ad/splashscreen/c/a/c;

    invoke-static {v1}, Lcom/kwad/components/ad/splashscreen/c/a/c;->e(Lcom/kwad/components/ad/splashscreen/c/a/c;)Lcom/kwad/components/ad/splashscreen/h;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/c$1;->Eq:Lcom/kwad/components/ad/splashscreen/c/a/c;

    invoke-static {v1}, Lcom/kwad/components/ad/splashscreen/c/a/c;->f(Lcom/kwad/components/ad/splashscreen/c/a/c;)Lcom/kwad/components/ad/splashscreen/h;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    invoke-virtual {v1}, Lcom/kwad/sdk/utils/bi;->getTime()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/sdk/core/report/z$a;->duration:J

    :cond_0
    new-instance v1, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v2, 0xe

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/j;->ch(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/report/j;->a(Lcom/kwad/sdk/core/report/z$a;)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    const/4 v1, 0x6

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->cm(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/c$1;->Eq:Lcom/kwad/components/ad/splashscreen/c/a/c;

    invoke-static {v1}, Lcom/kwad/components/ad/splashscreen/c/a/c;->g(Lcom/kwad/components/ad/splashscreen/c/a/c;)Lcom/kwad/components/ad/splashscreen/h;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x0

    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/c$1;->Eq:Lcom/kwad/components/ad/splashscreen/c/a/c;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/a/c;->h(Lcom/kwad/components/ad/splashscreen/c/a/c;)Lcom/kwad/components/ad/splashscreen/h;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/h;->kM()V

    return-void
.end method
