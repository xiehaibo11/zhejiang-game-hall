.class final Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$7;
.super Ljava/lang/Object;
.source "MBInterstitialActivity.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V
    .locals 0

    .line 931
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$7;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 933
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$7;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/l;

    move-result-object v0

    .line 934
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$7;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {v1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->g(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/l;->b(Ljava/lang/String;)V

    return-void
.end method
