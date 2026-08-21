.class public Lcom/tkay/expressad/out/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/e/a;
.implements Lcom/tkay/expressad/foundation/g/d/c;
.implements Ljava/io/Serializable;


# static fields
.field private static final a:J = 0x1L

.field public static final cR:I = 0x1

.field public static final cS:I = 0x2

.field public static final cT:I = 0x3


# instance fields
.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field public cU:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:J

.field private j:D

.field private k:I

.field private l:Ljava/lang/Object;

.field private m:I

.field private n:Ljava/lang/String;

.field private o:Landroid/graphics/drawable/Drawable;

.field private p:Landroid/graphics/drawable/Drawable;

.field private q:Lcom/tkay/expressad/out/k;

.field private r:I

.field private s:I

.field private t:I


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 32
    iput-object v0, p0, Lcom/tkay/expressad/out/d;->b:Ljava/lang/String;

    .line 34
    iput-object v0, p0, Lcom/tkay/expressad/out/d;->c:Ljava/lang/String;

    .line 36
    iput-object v0, p0, Lcom/tkay/expressad/out/d;->d:Ljava/lang/String;

    .line 38
    iput-object v0, p0, Lcom/tkay/expressad/out/d;->e:Ljava/lang/String;

    .line 40
    iput-object v0, p0, Lcom/tkay/expressad/out/d;->f:Ljava/lang/String;

    .line 42
    iput-object v0, p0, Lcom/tkay/expressad/out/d;->g:Ljava/lang/String;

    .line 44
    iput-object v0, p0, Lcom/tkay/expressad/out/d;->h:Ljava/lang/String;

    const-wide/16 v0, 0x0

    .line 46
    iput-wide v0, p0, Lcom/tkay/expressad/out/d;->i:J

    const v0, 0x8235

    .line 52
    iput v0, p0, Lcom/tkay/expressad/out/d;->k:I

    const/4 v0, 0x1

    .line 57
    iput v0, p0, Lcom/tkay/expressad/out/d;->m:I

    const/4 v0, 0x0

    .line 79
    iput v0, p0, Lcom/tkay/expressad/out/d;->r:I

    .line 84
    iput v0, p0, Lcom/tkay/expressad/out/d;->s:I

    .line 87
    iput v0, p0, Lcom/tkay/expressad/out/d;->t:I

    return-void
.end method

.method private a()Landroid/graphics/drawable/Drawable;
    .locals 1

    .line 69
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->o:Landroid/graphics/drawable/Drawable;

    return-object v0
.end method

.method private static a(Landroid/graphics/Bitmap;)Landroid/graphics/drawable/Drawable;
    .locals 1

    .line 282
    new-instance v0, Landroid/graphics/drawable/BitmapDrawable;

    invoke-direct {v0, p0}, Landroid/graphics/drawable/BitmapDrawable;-><init>(Landroid/graphics/Bitmap;)V

    return-object v0
.end method

.method private a(I)V
    .locals 0

    .line 262
    iput p1, p0, Lcom/tkay/expressad/out/d;->r:I

    return-void
.end method

.method private a(Landroid/graphics/drawable/Drawable;)V
    .locals 0

    .line 287
    iput-object p1, p0, Lcom/tkay/expressad/out/d;->o:Landroid/graphics/drawable/Drawable;

    return-void
.end method

.method private a(Lcom/tkay/expressad/out/k;)V
    .locals 1

    .line 105
    iput-object p1, p0, Lcom/tkay/expressad/out/d;->q:Lcom/tkay/expressad/out/k;

    .line 1218
    iget-object p1, p0, Lcom/tkay/expressad/out/d;->g:Ljava/lang/String;

    .line 106
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 107
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object p1

    .line 2218
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->g:Ljava/lang/String;

    .line 107
    invoke-virtual {p1, v0, p0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    :cond_0
    return-void
.end method

.method private a(Ljava/lang/Object;)V
    .locals 0

    .line 171
    iput-object p1, p0, Lcom/tkay/expressad/out/d;->l:Ljava/lang/Object;

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 0

    .line 278
    iput-object p1, p0, Lcom/tkay/expressad/out/d;->n:Ljava/lang/String;

    return-void
.end method

.method private b()Landroid/graphics/drawable/Drawable;
    .locals 1

    .line 73
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->p:Landroid/graphics/drawable/Drawable;

    return-object v0
.end method

.method private b(I)V
    .locals 0

    .line 270
    iput p1, p0, Lcom/tkay/expressad/out/d;->s:I

    return-void
.end method

.method private b(Landroid/graphics/drawable/Drawable;)V
    .locals 0

    .line 291
    iput-object p1, p0, Lcom/tkay/expressad/out/d;->p:Landroid/graphics/drawable/Drawable;

    return-void
.end method

.method private b(Lcom/tkay/expressad/out/k;)V
    .locals 1

    .line 117
    iput-object p1, p0, Lcom/tkay/expressad/out/d;->q:Lcom/tkay/expressad/out/k;

    .line 2226
    iget-object p1, p0, Lcom/tkay/expressad/out/d;->h:Ljava/lang/String;

    .line 118
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 119
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object p1

    .line 3226
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->h:Ljava/lang/String;

    .line 119
    invoke-virtual {p1, v0, p0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    :cond_0
    return-void
.end method

.method private c()Ljava/lang/Object;
    .locals 1

    .line 167
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->l:Ljava/lang/Object;

    return-object v0
.end method

.method private c(Lcom/tkay/expressad/out/k;)V
    .locals 0

    .line 124
    iput-object p1, p0, Lcom/tkay/expressad/out/d;->q:Lcom/tkay/expressad/out/k;

    return-void
.end method

.method private d()Ljava/lang/String;
    .locals 1

    .line 175
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    return-object v0
.end method

.method private e()I
    .locals 1

    .line 258
    iget v0, p0, Lcom/tkay/expressad/out/d;->r:I

    return v0
.end method

.method private f()I
    .locals 1

    .line 266
    iget v0, p0, Lcom/tkay/expressad/out/d;->s:I

    return v0
.end method

.method private g()Ljava/lang/String;
    .locals 1

    .line 274
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->n:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public final A(Ljava/lang/String;)V
    .locals 0

    .line 230
    iput-object p1, p0, Lcom/tkay/expressad/out/d;->h:Ljava/lang/String;

    return-void
.end method

.method public final B(Ljava/lang/String;)V
    .locals 0

    .line 254
    iput-object p1, p0, Lcom/tkay/expressad/out/d;->f:Ljava/lang/String;

    return-void
.end method

.method public final a(D)V
    .locals 0

    .line 156
    iput-wide p1, p0, Lcom/tkay/expressad/out/d;->j:D

    return-void
.end method

.method public final a(J)V
    .locals 0

    .line 246
    iput-wide p1, p0, Lcom/tkay/expressad/out/d;->i:J

    return-void
.end method

.method public final a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 1

    .line 4226
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->h:Ljava/lang/String;

    .line 129
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 5226
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->h:Ljava/lang/String;

    .line 129
    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    .line 130
    invoke-static {p1}, Lcom/tkay/expressad/out/d;->a(Landroid/graphics/Bitmap;)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    .line 5291
    iput-object v0, p0, Lcom/tkay/expressad/out/d;->p:Landroid/graphics/drawable/Drawable;

    .line 131
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->q:Lcom/tkay/expressad/out/k;

    if-eqz v0, :cond_0

    .line 132
    invoke-static {p1}, Lcom/tkay/expressad/out/d;->a(Landroid/graphics/Bitmap;)Landroid/graphics/drawable/Drawable;

    .line 6218
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->g:Ljava/lang/String;

    .line 136
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 7218
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->g:Ljava/lang/String;

    if-eqz v0, :cond_1

    .line 136
    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_1

    if-eqz p1, :cond_1

    .line 137
    invoke-static {p1}, Lcom/tkay/expressad/out/d;->a(Landroid/graphics/Bitmap;)Landroid/graphics/drawable/Drawable;

    move-result-object p2

    .line 8287
    iput-object p2, p0, Lcom/tkay/expressad/out/d;->o:Landroid/graphics/drawable/Drawable;

    .line 138
    iget-object p2, p0, Lcom/tkay/expressad/out/d;->q:Lcom/tkay/expressad/out/k;

    if-eqz p2, :cond_1

    .line 139
    invoke-static {p1}, Lcom/tkay/expressad/out/d;->a(Landroid/graphics/Bitmap;)Landroid/graphics/drawable/Drawable;

    :cond_1
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final aX()D
    .locals 2

    .line 152
    iget-wide v0, p0, Lcom/tkay/expressad/out/d;->j:D

    return-wide v0
.end method

.method public final aY()I
    .locals 1

    .line 160
    iget v0, p0, Lcom/tkay/expressad/out/d;->k:I

    return v0
.end method

.method public final aZ()Ljava/lang/String;
    .locals 1

    .line 186
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final ba()Ljava/lang/String;
    .locals 1

    .line 194
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->c:Ljava/lang/String;

    return-object v0
.end method

.method public final bb()Ljava/lang/String;
    .locals 1

    .line 202
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->d:Ljava/lang/String;

    return-object v0
.end method

.method public final bc()Ljava/lang/String;
    .locals 1

    .line 210
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->e:Ljava/lang/String;

    return-object v0
.end method

.method public final bd()Ljava/lang/String;
    .locals 1

    .line 218
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->g:Ljava/lang/String;

    return-object v0
.end method

.method public final be()Ljava/lang/String;
    .locals 1

    .line 226
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->h:Ljava/lang/String;

    return-object v0
.end method

.method public final bf()I
    .locals 1

    .line 234
    iget v0, p0, Lcom/tkay/expressad/out/d;->m:I

    return v0
.end method

.method public final bg()J
    .locals 2

    .line 242
    iget-wide v0, p0, Lcom/tkay/expressad/out/d;->i:J

    return-wide v0
.end method

.method public final bh()Ljava/lang/String;
    .locals 1

    .line 250
    iget-object v0, p0, Lcom/tkay/expressad/out/d;->f:Ljava/lang/String;

    return-object v0
.end method

.method public final bi()I
    .locals 1

    .line 299
    iget v0, p0, Lcom/tkay/expressad/out/d;->t:I

    return v0
.end method

.method public final o(I)V
    .locals 0

    .line 164
    iput p1, p0, Lcom/tkay/expressad/out/d;->k:I

    return-void
.end method

.method public o(Ljava/lang/String;)V
    .locals 1

    .line 179
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 182
    :cond_0
    iput-object p1, p0, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    return-void
.end method

.method public final p(I)V
    .locals 0

    .line 238
    iput p1, p0, Lcom/tkay/expressad/out/d;->m:I

    return-void
.end method

.method public final q(I)V
    .locals 0

    .line 295
    iput p1, p0, Lcom/tkay/expressad/out/d;->t:I

    return-void
.end method

.method public final v(Ljava/lang/String;)V
    .locals 0

    .line 190
    iput-object p1, p0, Lcom/tkay/expressad/out/d;->b:Ljava/lang/String;

    return-void
.end method

.method public final w(Ljava/lang/String;)V
    .locals 0

    .line 198
    iput-object p1, p0, Lcom/tkay/expressad/out/d;->c:Ljava/lang/String;

    return-void
.end method

.method public final x(Ljava/lang/String;)V
    .locals 0

    .line 206
    iput-object p1, p0, Lcom/tkay/expressad/out/d;->d:Ljava/lang/String;

    return-void
.end method

.method public final y(Ljava/lang/String;)V
    .locals 0

    .line 214
    iput-object p1, p0, Lcom/tkay/expressad/out/d;->e:Ljava/lang/String;

    return-void
.end method

.method public final z(Ljava/lang/String;)V
    .locals 0

    .line 222
    iput-object p1, p0, Lcom/tkay/expressad/out/d;->g:Ljava/lang/String;

    return-void
.end method
