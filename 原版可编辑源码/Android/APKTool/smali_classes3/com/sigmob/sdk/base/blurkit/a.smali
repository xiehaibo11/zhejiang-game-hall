.class public Lcom/sigmob/sdk/base/blurkit/a;
.super Ljava/lang/Object;


# static fields
.field private static final a:F = 1.0f

.field private static b:Lcom/sigmob/sdk/base/blurkit/a;

.field private static c:Landroid/renderscript/RenderScript;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a(Landroid/view/View;)Landroid/graphics/Bitmap;
    .locals 3

    invoke-virtual {p1}, Landroid/view/View;->getWidth()I

    move-result v0

    invoke-virtual {p1}, Landroid/view/View;->getHeight()I

    move-result v1

    sget-object v2, Landroid/graphics/Bitmap$Config;->ARGB_8888:Landroid/graphics/Bitmap$Config;

    invoke-static {v0, v1, v2}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v0

    new-instance v1, Landroid/graphics/Canvas;

    invoke-direct {v1, v0}, Landroid/graphics/Canvas;-><init>(Landroid/graphics/Bitmap;)V

    invoke-virtual {p1, v1}, Landroid/view/View;->draw(Landroid/graphics/Canvas;)V

    return-object v0
.end method

.method private a(Landroid/view/View;F)Landroid/graphics/Bitmap;
    .locals 3

    invoke-virtual {p1}, Landroid/view/View;->getWidth()I

    move-result v0

    int-to-float v0, v0

    mul-float/2addr v0, p2

    float-to-int v0, v0

    invoke-virtual {p1}, Landroid/view/View;->getHeight()I

    move-result v1

    int-to-float v1, v1

    mul-float/2addr v1, p2

    float-to-int v1, v1

    sget-object v2, Landroid/graphics/Bitmap$Config;->ARGB_8888:Landroid/graphics/Bitmap$Config;

    invoke-static {v0, v1, v2}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v0

    new-instance v1, Landroid/graphics/Canvas;

    invoke-direct {v1, v0}, Landroid/graphics/Canvas;-><init>(Landroid/graphics/Bitmap;)V

    new-instance v2, Landroid/graphics/Matrix;

    invoke-direct {v2}, Landroid/graphics/Matrix;-><init>()V

    invoke-virtual {v2, p2, p2}, Landroid/graphics/Matrix;->preScale(FF)Z

    invoke-virtual {v1, v2}, Landroid/graphics/Canvas;->setMatrix(Landroid/graphics/Matrix;)V

    invoke-virtual {p1, v1}, Landroid/view/View;->draw(Landroid/graphics/Canvas;)V

    return-object v0
.end method

.method public static a()Lcom/sigmob/sdk/base/blurkit/a;
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/base/blurkit/a;->b:Lcom/sigmob/sdk/base/blurkit/a;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "BlurKit not initialized!"

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public static a(Landroid/content/Context;)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/blurkit/a;->b:Lcom/sigmob/sdk/base/blurkit/a;

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/sigmob/sdk/base/blurkit/a;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/blurkit/a;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/blurkit/a;->b:Lcom/sigmob/sdk/base/blurkit/a;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Landroid/renderscript/RenderScript;->create(Landroid/content/Context;)Landroid/renderscript/RenderScript;

    move-result-object p0

    sput-object p0, Lcom/sigmob/sdk/base/blurkit/a;->c:Landroid/renderscript/RenderScript;

    return-void
.end method


# virtual methods
.method public a(Landroid/graphics/Bitmap;I)Landroid/graphics/Bitmap;
    .locals 4

    sget-object v0, Lcom/sigmob/sdk/base/blurkit/a;->c:Landroid/renderscript/RenderScript;

    invoke-static {v0, p1}, Landroid/renderscript/Allocation;->createFromBitmap(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/blurkit/a;->c:Landroid/renderscript/RenderScript;

    invoke-virtual {v0}, Landroid/renderscript/Allocation;->getType()Landroid/renderscript/Type;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/renderscript/Allocation;->createTyped(Landroid/renderscript/RenderScript;Landroid/renderscript/Type;)Landroid/renderscript/Allocation;

    move-result-object v1

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x11

    if-lt v2, v3, :cond_0

    sget-object v2, Lcom/sigmob/sdk/base/blurkit/a;->c:Landroid/renderscript/RenderScript;

    invoke-static {v2}, Landroid/renderscript/Element;->U8_4(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/renderscript/ScriptIntrinsicBlur;->create(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicBlur;

    move-result-object v2

    int-to-float p2, p2

    invoke-virtual {v2, p2}, Landroid/renderscript/ScriptIntrinsicBlur;->setRadius(F)V

    invoke-virtual {v2, v0}, Landroid/renderscript/ScriptIntrinsicBlur;->setInput(Landroid/renderscript/Allocation;)V

    invoke-virtual {v2, v1}, Landroid/renderscript/ScriptIntrinsicBlur;->forEach(Landroid/renderscript/Allocation;)V

    :cond_0
    invoke-virtual {v1, p1}, Landroid/renderscript/Allocation;->copyTo(Landroid/graphics/Bitmap;)V

    return-object p1
.end method

.method public a(Landroid/view/View;I)Landroid/graphics/Bitmap;
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/blurkit/a;->a(Landroid/view/View;)Landroid/graphics/Bitmap;

    move-result-object p1

    invoke-virtual {p0, p1, p2}, Lcom/sigmob/sdk/base/blurkit/a;->a(Landroid/graphics/Bitmap;I)Landroid/graphics/Bitmap;

    move-result-object p1

    return-object p1
.end method

.method public a(Landroid/view/View;IF)Landroid/graphics/Bitmap;
    .locals 0

    invoke-direct {p0, p1, p3}, Lcom/sigmob/sdk/base/blurkit/a;->a(Landroid/view/View;F)Landroid/graphics/Bitmap;

    move-result-object p1

    invoke-virtual {p0, p1, p2}, Lcom/sigmob/sdk/base/blurkit/a;->a(Landroid/graphics/Bitmap;I)Landroid/graphics/Bitmap;

    move-result-object p1

    return-object p1
.end method
