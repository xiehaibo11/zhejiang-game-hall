.class public final Lcom/tkay/expressad/foundation/g/a/g;
.super Lcom/tkay/expressad/foundation/g/a/a;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/expressad/foundation/g/a/a<",
        "Ljava/lang/String;",
        "Landroid/graphics/Bitmap;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/g/a/a;-><init>()V

    return-void
.end method

.method private static a(Landroid/graphics/Bitmap;)Ljava/lang/ref/Reference;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/graphics/Bitmap;",
            ")",
            "Ljava/lang/ref/Reference<",
            "Landroid/graphics/Bitmap;",
            ">;"
        }
    .end annotation

    .line 11
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p0}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    return-object v0
.end method


# virtual methods
.method protected final synthetic c(Ljava/lang/Object;)Ljava/lang/ref/Reference;
    .locals 1

    .line 8
    check-cast p1, Landroid/graphics/Bitmap;

    .line 1011
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    return-object v0
.end method
