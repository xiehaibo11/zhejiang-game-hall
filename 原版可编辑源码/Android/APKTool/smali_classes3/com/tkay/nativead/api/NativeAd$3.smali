.class final Lcom/tkay/nativead/api/NativeAd$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/nativead/api/NativeAd$ImpressionEventListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/nativead/api/NativeAd;->renderViewToWindow(Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/nativead/api/NativeAd;


# direct methods
.method constructor <init>(Lcom/tkay/nativead/api/NativeAd;)V
    .locals 0

    .line 229
    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd$3;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onImpression()V
    .locals 5

    .line 232
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 233
    iget-object v2, p0, Lcom/tkay/nativead/api/NativeAd$3;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v2, v2, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/tkay/nativead/api/NativeAd$3;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v2, v2, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-virtual {v2}, Lcom/tkay/nativead/unitgroup/a;->getDetail()Lcom/tkay/core/common/f/d;

    move-result-object v2

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    if-eqz v2, :cond_1

    .line 234
    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 235
    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4, v0, v1}, Lcom/tkay/core/common/l/g;->a(Ljava/lang/String;Ljava/lang/String;J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/tkay/core/common/f/d;->h(Ljava/lang/String;)V

    .line 237
    :cond_1
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$3;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v0, v0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    instance-of v0, v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    if-eqz v0, :cond_2

    .line 238
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$3;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v0, v0, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    check-cast v0, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAd;->setShowId(Ljava/lang/String;)V

    .line 241
    :cond_2
    iget-object v0, p0, Lcom/tkay/nativead/api/NativeAd$3;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object v1, v0, Lcom/tkay/nativead/api/NativeAd;->mNativeView:Lcom/tkay/nativead/api/TYNativeAdView;

    invoke-virtual {v0, v1}, Lcom/tkay/nativead/api/NativeAd;->recordShow(Lcom/tkay/nativead/api/TYNativeAdView;)V

    return-void
.end method
