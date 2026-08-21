.class final Lcom/kwad/components/ad/splashscreen/c/q$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/q$1;->onAudioBeOccupied()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic DU:Lcom/kwad/components/ad/splashscreen/c/q$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/q$1;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/q$1$1;->DU:Lcom/kwad/components/ad/splashscreen/c/q$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q$1$1;->DU:Lcom/kwad/components/ad/splashscreen/c/q$1;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/q$1;->DT:Lcom/kwad/components/ad/splashscreen/c/q;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q$1$1;->DU:Lcom/kwad/components/ad/splashscreen/c/q$1;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/q$1;->DT:Lcom/kwad/components/ad/splashscreen/c/q;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/q$1$1;->DU:Lcom/kwad/components/ad/splashscreen/c/q$1;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/c/q$1;->DT:Lcom/kwad/components/ad/splashscreen/c/q;

    invoke-static {v2}, Lcom/kwad/components/ad/splashscreen/c/q;->b(Lcom/kwad/components/ad/splashscreen/c/q;)Z

    move-result v2

    invoke-virtual {v0, v2, v1}, Lcom/kwad/components/ad/splashscreen/e/a;->setAudioEnabled(ZZ)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q$1$1;->DU:Lcom/kwad/components/ad/splashscreen/c/q$1;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/q$1;->DT:Lcom/kwad/components/ad/splashscreen/c/q;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q$1$1;->DU:Lcom/kwad/components/ad/splashscreen/c/q$1;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/q$1;->DT:Lcom/kwad/components/ad/splashscreen/c/q;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/q$1$1;->DU:Lcom/kwad/components/ad/splashscreen/c/q$1;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/c/q$1;->DT:Lcom/kwad/components/ad/splashscreen/c/q;

    invoke-static {v2}, Lcom/kwad/components/ad/splashscreen/c/q;->b(Lcom/kwad/components/ad/splashscreen/c/q;)Z

    move-result v2

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    if-eqz v2, :cond_1

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->speakerIconUrl:Ljava/lang/String;

    goto :goto_0

    :cond_1
    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->speakerMuteIconUrl:Ljava/lang/String;

    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/q$1$1;->DU:Lcom/kwad/components/ad/splashscreen/c/q$1;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/c/q$1;->DT:Lcom/kwad/components/ad/splashscreen/c/q;

    invoke-static {v2}, Lcom/kwad/components/ad/splashscreen/c/q;->a(Lcom/kwad/components/ad/splashscreen/c/q;)Landroid/widget/ImageView;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/ad/splashscreen/c/q$1$1;->DU:Lcom/kwad/components/ad/splashscreen/c/q$1;

    iget-object v3, v3, Lcom/kwad/components/ad/splashscreen/c/q$1;->DT:Lcom/kwad/components/ad/splashscreen/c/q;

    iget-object v3, v3, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v3, v3, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2, v0, v3}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    goto :goto_1

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q$1$1;->DU:Lcom/kwad/components/ad/splashscreen/c/q$1;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/q$1;->DT:Lcom/kwad/components/ad/splashscreen/c/q;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/q;->a(Lcom/kwad/components/ad/splashscreen/c/q;)Landroid/widget/ImageView;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/q$1$1;->DU:Lcom/kwad/components/ad/splashscreen/c/q$1;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/c/q$1;->DT:Lcom/kwad/components/ad/splashscreen/c/q;

    invoke-static {v2}, Lcom/kwad/components/ad/splashscreen/c/q;->c(Lcom/kwad/components/ad/splashscreen/c/q;)Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    sget v3, Lcom/kwad/sdk/R$drawable;->ksad_splash_sound_selector:I

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    :goto_1
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q$1$1;->DU:Lcom/kwad/components/ad/splashscreen/c/q$1;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/q$1;->DT:Lcom/kwad/components/ad/splashscreen/c/q;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/q;->a(Lcom/kwad/components/ad/splashscreen/c/q;)Landroid/widget/ImageView;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setSelected(Z)V

    :cond_3
    return-void
.end method
