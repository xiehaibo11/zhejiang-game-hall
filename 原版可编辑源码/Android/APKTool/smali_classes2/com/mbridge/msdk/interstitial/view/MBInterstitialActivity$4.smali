.class final Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$4;
.super Ljava/lang/Object;
.source "MBInterstitialActivity.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/dialog/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->clickTracking(ZLjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;ZLjava/lang/String;)V
    .locals 0

    .line 697
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$4;->c:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    iput-boolean p2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$4;->a:Z

    iput-object p3, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$4;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 700
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$4;->c:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    iget-boolean v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$4;->a:Z

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$4;->b:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;ZLjava/lang/String;)V

    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final c()V
    .locals 0

    .line 709
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$4;->a()V

    return-void
.end method
