.class final Lcom/kwad/components/ad/splashscreen/h$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/e/d/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/h;->a(ILandroid/content/Context;IILcom/kwad/components/ad/splashscreen/h$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Ct:Lcom/kwad/components/ad/splashscreen/h$a;

.field final synthetic Cu:Lcom/kwad/components/ad/splashscreen/h;

.field final synthetic eu:I


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/h;ILcom/kwad/components/ad/splashscreen/h$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/h$1;->Cu:Lcom/kwad/components/ad/splashscreen/h;

    iput p2, p0, Lcom/kwad/components/ad/splashscreen/h$1;->eu:I

    iput-object p3, p0, Lcom/kwad/components/ad/splashscreen/h$1;->Ct:Lcom/kwad/components/ad/splashscreen/h$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h$1;->Cu:Lcom/kwad/components/ad/splashscreen/h;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/h;->b(Lcom/kwad/components/ad/splashscreen/h;)Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h$1;->Cu:Lcom/kwad/components/ad/splashscreen/h;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/h;->b(Lcom/kwad/components/ad/splashscreen/h;)Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsSplashScreenAd$SplashScreenAdInteractionListener;->onAdClicked()V

    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/h$1;->Cu:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    if-eqz v1, :cond_1

    const-string v1, "duration"

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/h$1;->Cu:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    invoke-virtual {v2}, Lcom/kwad/components/ad/splashscreen/e/a;->getCurrentPosition()J

    move-result-wide v2

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    new-instance v1, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/j;-><init>()V

    iget v2, p0, Lcom/kwad/components/ad/splashscreen/h$1;->eu:I

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/j;->cg(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/h$1;->Cu:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v2}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/j;->c(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/sdk/core/report/j;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/h$1;->Cu:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2, v1, v0}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/h$1;->Ct:Lcom/kwad/components/ad/splashscreen/h$a;

    if-eqz v0, :cond_2

    invoke-interface {v0, v1}, Lcom/kwad/components/ad/splashscreen/h$a;->b(Lcom/kwad/sdk/core/report/j;)V

    :cond_2
    return-void
.end method
