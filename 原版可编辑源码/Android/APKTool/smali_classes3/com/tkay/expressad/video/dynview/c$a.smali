.class public final Lcom/tkay/expressad/video/dynview/c$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/dynview/c$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/dynview/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private a:Landroid/content/Context;

.field private b:Ljava/lang/String;

.field private c:I

.field private d:F

.field private e:F

.field private f:I

.field private g:I

.field private h:Landroid/view/View;

.field private i:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private j:I

.field private k:Z

.field private l:Ljava/lang/String;

.field private m:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 102
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/dynview/c$a;)F
    .locals 0

    .line 86
    iget p0, p0, Lcom/tkay/expressad/video/dynview/c$a;->e:F

    return p0
.end method

.method static synthetic b(Lcom/tkay/expressad/video/dynview/c$a;)F
    .locals 0

    .line 86
    iget p0, p0, Lcom/tkay/expressad/video/dynview/c$a;->d:F

    return p0
.end method

.method static synthetic c(Lcom/tkay/expressad/video/dynview/c$a;)I
    .locals 0

    .line 86
    iget p0, p0, Lcom/tkay/expressad/video/dynview/c$a;->f:I

    return p0
.end method

.method static synthetic d(Lcom/tkay/expressad/video/dynview/c$a;)I
    .locals 0

    .line 86
    iget p0, p0, Lcom/tkay/expressad/video/dynview/c$a;->g:I

    return p0
.end method

.method static synthetic e(Lcom/tkay/expressad/video/dynview/c$a;)Landroid/content/Context;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/tkay/expressad/video/dynview/c$a;->a:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/expressad/video/dynview/c$a;)Ljava/lang/String;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/tkay/expressad/video/dynview/c$a;->b:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/expressad/video/dynview/c$a;)I
    .locals 0

    .line 86
    iget p0, p0, Lcom/tkay/expressad/video/dynview/c$a;->c:I

    return p0
.end method

.method static synthetic h(Lcom/tkay/expressad/video/dynview/c$a;)Landroid/view/View;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/tkay/expressad/video/dynview/c$a;->h:Landroid/view/View;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/expressad/video/dynview/c$a;)Ljava/util/List;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/tkay/expressad/video/dynview/c$a;->i:Ljava/util/List;

    return-object p0
.end method

.method static synthetic j(Lcom/tkay/expressad/video/dynview/c$a;)I
    .locals 0

    .line 86
    iget p0, p0, Lcom/tkay/expressad/video/dynview/c$a;->j:I

    return p0
.end method

.method static synthetic k(Lcom/tkay/expressad/video/dynview/c$a;)Z
    .locals 0

    .line 86
    iget-boolean p0, p0, Lcom/tkay/expressad/video/dynview/c$a;->k:Z

    return p0
.end method


# virtual methods
.method public final a(F)Lcom/tkay/expressad/video/dynview/c$b;
    .locals 0

    .line 125
    iput p1, p0, Lcom/tkay/expressad/video/dynview/c$a;->d:F

    return-object p0
.end method

.method public final a(I)Lcom/tkay/expressad/video/dynview/c$b;
    .locals 0

    .line 119
    iput p1, p0, Lcom/tkay/expressad/video/dynview/c$a;->c:I

    return-object p0
.end method

.method public final a(Landroid/content/Context;)Lcom/tkay/expressad/video/dynview/c$b;
    .locals 0

    .line 107
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/c$a;->a:Landroid/content/Context;

    return-object p0
.end method

.method public final a(Landroid/view/View;)Lcom/tkay/expressad/video/dynview/c$b;
    .locals 0

    .line 149
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/c$a;->h:Landroid/view/View;

    return-object p0
.end method

.method public final a(Ljava/lang/String;)Lcom/tkay/expressad/video/dynview/c$b;
    .locals 0

    .line 113
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/c$a;->b:Ljava/lang/String;

    return-object p0
.end method

.method public final a(Ljava/util/List;)Lcom/tkay/expressad/video/dynview/c$b;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)",
            "Lcom/tkay/expressad/video/dynview/c$b;"
        }
    .end annotation

    .line 156
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/c$a;->i:Ljava/util/List;

    return-object p0
.end method

.method public final a(Z)Lcom/tkay/expressad/video/dynview/c$b;
    .locals 0

    .line 168
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/c$a;->k:Z

    return-object p0
.end method

.method public final a()Lcom/tkay/expressad/video/dynview/c;
    .locals 2

    .line 187
    new-instance v0, Lcom/tkay/expressad/video/dynview/c;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/tkay/expressad/video/dynview/c;-><init>(Lcom/tkay/expressad/video/dynview/c$a;B)V

    return-object v0
.end method

.method public final b(F)Lcom/tkay/expressad/video/dynview/c$b;
    .locals 0

    .line 131
    iput p1, p0, Lcom/tkay/expressad/video/dynview/c$a;->e:F

    return-object p0
.end method

.method public final b(I)Lcom/tkay/expressad/video/dynview/c$b;
    .locals 0

    .line 137
    iput p1, p0, Lcom/tkay/expressad/video/dynview/c$a;->f:I

    return-object p0
.end method

.method public final b(Ljava/lang/String;)Lcom/tkay/expressad/video/dynview/c$b;
    .locals 0

    .line 174
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/c$a;->l:Ljava/lang/String;

    return-object p0
.end method

.method public final c(I)Lcom/tkay/expressad/video/dynview/c$b;
    .locals 0

    .line 143
    iput p1, p0, Lcom/tkay/expressad/video/dynview/c$a;->g:I

    return-object p0
.end method

.method public final d(I)Lcom/tkay/expressad/video/dynview/c$b;
    .locals 0

    .line 162
    iput p1, p0, Lcom/tkay/expressad/video/dynview/c$a;->j:I

    return-object p0
.end method

.method public final e(I)Lcom/tkay/expressad/video/dynview/c$b;
    .locals 0

    .line 180
    iput p1, p0, Lcom/tkay/expressad/video/dynview/c$a;->m:I

    return-object p0
.end method
