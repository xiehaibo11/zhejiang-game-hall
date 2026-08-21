.class public final Lcom/tkay/expressad/video/dynview/g/a$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/dynview/g/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/dynview/g/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private a:Landroid/graphics/drawable/shapes/RectShape;

.field private b:Landroid/graphics/Bitmap;

.field private c:Landroid/graphics/Bitmap;

.field private d:Z

.field private e:I

.field private f:I

.field private g:I

.field private h:F

.field private i:F


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 225
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x64

    .line 220
    iput v0, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->f:I

    const/16 v0, 0xa

    .line 221
    iput v0, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->g:I

    .line 226
    new-instance v0, Landroid/graphics/drawable/shapes/RectShape;

    invoke-direct {v0}, Landroid/graphics/drawable/shapes/RectShape;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->a:Landroid/graphics/drawable/shapes/RectShape;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    .line 213
    invoke-direct {p0}, Lcom/tkay/expressad/video/dynview/g/a$a;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/dynview/g/a$a;)Landroid/graphics/drawable/shapes/RectShape;
    .locals 0

    .line 213
    iget-object p0, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->a:Landroid/graphics/drawable/shapes/RectShape;

    return-object p0
.end method

.method static synthetic b(Lcom/tkay/expressad/video/dynview/g/a$a;)Landroid/graphics/Bitmap;
    .locals 0

    .line 213
    iget-object p0, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->b:Landroid/graphics/Bitmap;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/expressad/video/dynview/g/a$a;)Landroid/graphics/Bitmap;
    .locals 0

    .line 213
    iget-object p0, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->c:Landroid/graphics/Bitmap;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/expressad/video/dynview/g/a$a;)Z
    .locals 0

    .line 213
    iget-boolean p0, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->d:Z

    return p0
.end method

.method static synthetic e(Lcom/tkay/expressad/video/dynview/g/a$a;)I
    .locals 0

    .line 213
    iget p0, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->e:I

    return p0
.end method

.method static synthetic f(Lcom/tkay/expressad/video/dynview/g/a$a;)I
    .locals 0

    .line 213
    iget p0, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->f:I

    return p0
.end method

.method static synthetic g(Lcom/tkay/expressad/video/dynview/g/a$a;)I
    .locals 0

    .line 213
    iget p0, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->g:I

    return p0
.end method

.method static synthetic h(Lcom/tkay/expressad/video/dynview/g/a$a;)F
    .locals 0

    .line 213
    iget p0, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->h:F

    return p0
.end method

.method static synthetic i(Lcom/tkay/expressad/video/dynview/g/a$a;)F
    .locals 0

    .line 213
    iget p0, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->i:F

    return p0
.end method


# virtual methods
.method public final a()Lcom/tkay/expressad/video/dynview/g/a$b;
    .locals 1

    const/4 v0, 0x1

    .line 244
    iput-boolean v0, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->d:Z

    return-object p0
.end method

.method public final a(F)Lcom/tkay/expressad/video/dynview/g/a$b;
    .locals 0

    .line 257
    iput p1, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->h:F

    return-object p0
.end method

.method public final a(I)Lcom/tkay/expressad/video/dynview/g/a$b;
    .locals 0

    .line 250
    iput p1, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->e:I

    return-object p0
.end method

.method public final a(Landroid/graphics/Bitmap;)Lcom/tkay/expressad/video/dynview/g/a$b;
    .locals 0

    .line 232
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->b:Landroid/graphics/Bitmap;

    return-object p0
.end method

.method public final b(F)Lcom/tkay/expressad/video/dynview/g/a$b;
    .locals 0

    .line 263
    iput p1, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->i:F

    return-object p0
.end method

.method public final b(I)Lcom/tkay/expressad/video/dynview/g/a$b;
    .locals 0

    .line 269
    iput p1, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->f:I

    return-object p0
.end method

.method public final b(Landroid/graphics/Bitmap;)Lcom/tkay/expressad/video/dynview/g/a$b;
    .locals 0

    .line 238
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->c:Landroid/graphics/Bitmap;

    return-object p0
.end method

.method public final b()Lcom/tkay/expressad/video/dynview/g/a;
    .locals 2

    .line 282
    new-instance v0, Lcom/tkay/expressad/video/dynview/g/a;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/tkay/expressad/video/dynview/g/a;-><init>(Lcom/tkay/expressad/video/dynview/g/a$a;B)V

    return-object v0
.end method

.method public final c(I)Lcom/tkay/expressad/video/dynview/g/a$b;
    .locals 0

    .line 275
    iput p1, p0, Lcom/tkay/expressad/video/dynview/g/a$a;->g:I

    return-object p0
.end method
