.class final Lcom/tkay/nativead/api/NativeAd$4;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/nativead/api/NativeAd;
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

    .line 288
    iput-object p1, p0, Lcom/tkay/nativead/api/NativeAd$4;->this$0:Lcom/tkay/nativead/api/NativeAd;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    .line 291
    iget-object p1, p0, Lcom/tkay/nativead/api/NativeAd$4;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object p1, p1, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    if-eqz p1, :cond_0

    .line 292
    iget-object p1, p0, Lcom/tkay/nativead/api/NativeAd$4;->this$0:Lcom/tkay/nativead/api/NativeAd;

    iget-object p1, p1, Lcom/tkay/nativead/api/NativeAd;->mBaseNativeAd:Lcom/tkay/nativead/unitgroup/a;

    invoke-virtual {p1}, Lcom/tkay/nativead/unitgroup/a;->notifyAdDislikeClick()V

    :cond_0
    return-void
.end method
