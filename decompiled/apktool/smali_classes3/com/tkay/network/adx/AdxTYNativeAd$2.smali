.class final Lcom/tkay/network/adx/AdxTYNativeAd$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/ui/BaseMediaATView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/adx/AdxTYNativeAd;->getAdMediaView([Ljava/lang/Object;)Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/adx/AdxTYNativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/network/adx/AdxTYNativeAd;)V
    .locals 0

    .line 114
    iput-object p1, p0, Lcom/tkay/network/adx/AdxTYNativeAd$2;->a:Lcom/tkay/network/adx/AdxTYNativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClickCloseView()V
    .locals 1

    .line 117
    iget-object v0, p0, Lcom/tkay/network/adx/AdxTYNativeAd$2;->a:Lcom/tkay/network/adx/AdxTYNativeAd;

    invoke-virtual {v0}, Lcom/tkay/network/adx/AdxTYNativeAd;->notifyAdDislikeClick()V

    return-void
.end method
