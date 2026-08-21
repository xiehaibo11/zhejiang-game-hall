.class public Lcom/tkay/nativead/api/TYNativeImageView;
.super Landroid/widget/ImageView;


# static fields
.field public static final TAG:Ljava/lang/String;


# instance fields
.field mImageUrl:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 26
    const-class v0, Lcom/tkay/nativead/api/TYNativeImageView;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/nativead/api/TYNativeImageView;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 29
    invoke-direct {p0, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 33
    invoke-direct {p0, p1, p2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 38
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method


# virtual methods
.method protected dispatchDraw(Landroid/graphics/Canvas;)V
    .locals 0

    .line 82
    :try_start_0
    invoke-super {p0, p1}, Landroid/widget/ImageView;->dispatchDraw(Landroid/graphics/Canvas;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 0

    .line 91
    :try_start_0
    invoke-super {p0, p1}, Landroid/widget/ImageView;->onDraw(Landroid/graphics/Canvas;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public setImage(Ljava/lang/String;)V
    .locals 2

    .line 71
    invoke-virtual {p0}, Lcom/tkay/nativead/api/TYNativeImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 73
    iget v1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    iget v0, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    invoke-virtual {p0, p1, v1, v0}, Lcom/tkay/nativead/api/TYNativeImageView;->setImage(Ljava/lang/String;II)V

    return-void

    :cond_0
    const/4 v0, -0x1

    .line 75
    invoke-virtual {p0, p1, v0, v0}, Lcom/tkay/nativead/api/TYNativeImageView;->setImage(Ljava/lang/String;II)V

    return-void
.end method

.method public setImage(Ljava/lang/String;II)V
    .locals 4

    .line 44
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 45
    sget-object p1, Lcom/tkay/nativead/api/TYNativeImageView;->TAG:Ljava/lang/String;

    const-string p2, "load: url is empty!"

    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 48
    :cond_0
    iput-object p1, p0, Lcom/tkay/nativead/api/TYNativeImageView;->mImageUrl:Ljava/lang/String;

    .line 50
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p0}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    .line 52
    invoke-virtual {p0}, Lcom/tkay/nativead/api/TYNativeImageView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v1

    new-instance v2, Lcom/tkay/core/common/res/e;

    const/4 v3, 0x2

    invoke-direct {v2, v3, p1}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance p1, Lcom/tkay/nativead/api/TYNativeImageView$1;

    invoke-direct {p1, p0, v0}, Lcom/tkay/nativead/api/TYNativeImageView$1;-><init>(Lcom/tkay/nativead/api/TYNativeImageView;Ljava/lang/ref/WeakReference;)V

    invoke-virtual {v1, v2, p2, p3, p1}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;IILcom/tkay/core/common/res/b$a;)V

    return-void
.end method
