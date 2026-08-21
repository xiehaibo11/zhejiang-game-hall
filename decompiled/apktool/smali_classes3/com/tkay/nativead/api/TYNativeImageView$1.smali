.class final Lcom/tkay/nativead/api/TYNativeImageView$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/res/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/nativead/api/TYNativeImageView;->setImage(Ljava/lang/String;II)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/nativead/api/TYNativeImageView;

.field final synthetic val$imageViewWeakReference:Ljava/lang/ref/WeakReference;


# direct methods
.method constructor <init>(Lcom/tkay/nativead/api/TYNativeImageView;Ljava/lang/ref/WeakReference;)V
    .locals 0

    .line 52
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativeImageView$1;->this$0:Lcom/tkay/nativead/api/TYNativeImageView;

    iput-object p2, p0, Lcom/tkay/nativead/api/TYNativeImageView$1;->val$imageViewWeakReference:Ljava/lang/ref/WeakReference;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFail(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 63
    sget-object p1, Lcom/tkay/nativead/api/TYNativeImageView;->TAG:Ljava/lang/String;

    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "load: image load fail:"

    invoke-virtual {v0, p2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 2

    .line 55
    iget-object v0, p0, Lcom/tkay/nativead/api/TYNativeImageView$1;->val$imageViewWeakReference:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/nativead/api/TYNativeImageView;

    .line 56
    iget-object v1, p0, Lcom/tkay/nativead/api/TYNativeImageView$1;->this$0:Lcom/tkay/nativead/api/TYNativeImageView;

    iget-object v1, v1, Lcom/tkay/nativead/api/TYNativeImageView;->mImageUrl:Ljava/lang/String;

    invoke-static {v1, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    if-eqz v0, :cond_0

    .line 57
    invoke-virtual {v0, p2}, Lcom/tkay/nativead/api/TYNativeImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method
