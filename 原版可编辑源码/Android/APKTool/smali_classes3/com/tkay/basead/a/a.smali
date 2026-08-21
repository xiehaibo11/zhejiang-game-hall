.class public final Lcom/tkay/basead/a/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/a/a$a;
    }
.end annotation


# instance fields
.field a:Lcom/tkay/basead/d;

.field b:Lcom/tkay/core/common/l/a/c;

.field private final c:Ljava/lang/String;

.field private d:Landroid/view/View;

.field private e:Lcom/tkay/core/common/f/i;

.field private f:Lcom/tkay/basead/a/a$a;

.field private g:Landroid/app/Activity;

.field private h:Z

.field private i:Landroid/app/Application$ActivityLifecycleCallbacks;


# direct methods
.method public constructor <init>(Landroid/view/View;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/a/a$a;)V
    .locals 2

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/a/a;->c:Ljava/lang/String;

    const/4 v0, 0x0

    .line 27
    iput-object v0, p0, Lcom/tkay/basead/a/a;->g:Landroid/app/Activity;

    const/4 v0, 0x0

    .line 28
    iput-boolean v0, p0, Lcom/tkay/basead/a/a;->h:Z

    .line 35
    iput-object p1, p0, Lcom/tkay/basead/a/a;->d:Landroid/view/View;

    .line 36
    iput-object p2, p0, Lcom/tkay/basead/a/a;->e:Lcom/tkay/core/common/f/i;

    .line 37
    iput-object p3, p0, Lcom/tkay/basead/a/a;->f:Lcom/tkay/basead/a/a$a;

    .line 39
    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 40
    instance-of p2, p1, Landroid/app/Application;

    if-nez p2, :cond_0

    .line 41
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    .line 45
    :cond_0
    new-instance p2, Lcom/tkay/basead/a/a$1;

    invoke-direct {p2, p0, p1}, Lcom/tkay/basead/a/a$1;-><init>(Lcom/tkay/basead/a/a;Landroid/content/Context;)V

    iput-object p2, p0, Lcom/tkay/basead/a/a;->i:Landroid/app/Application$ActivityLifecycleCallbacks;

    .line 76
    :try_start_0
    check-cast p1, Landroid/app/Application;

    invoke-virtual {p1, p2}, Landroid/app/Application;->registerActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 78
    :catch_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->q()Ljava/lang/String;

    move-result-object p1

    const-string p2, "Error"

    const-string p3, "Error, cannot registerActivityLifecycleCallbacks here!"

    invoke-static {p2, p3, p1}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 81
    :goto_0
    iget-object p1, p0, Lcom/tkay/basead/a/a;->e:Lcom/tkay/core/common/f/i;

    iget-object p1, p1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    .line 83
    new-instance p2, Lcom/tkay/basead/d;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/j;->G()I

    move-result p1

    int-to-long v0, p1

    new-instance p1, Lcom/tkay/basead/a/a$2;

    invoke-direct {p1, p0}, Lcom/tkay/basead/a/a$2;-><init>(Lcom/tkay/basead/a/a;)V

    invoke-direct {p2, v0, v1, p1}, Lcom/tkay/basead/d;-><init>(JLjava/lang/Runnable;)V

    iput-object p2, p0, Lcom/tkay/basead/a/a;->a:Lcom/tkay/basead/d;

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/a/a;)Landroid/app/Activity;
    .locals 0

    .line 21
    iget-object p0, p0, Lcom/tkay/basead/a/a;->g:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/basead/a/a;Landroid/app/Activity;)Landroid/app/Activity;
    .locals 0

    .line 21
    iput-object p1, p0, Lcom/tkay/basead/a/a;->g:Landroid/app/Activity;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/basead/a/a;Landroid/app/Application$ActivityLifecycleCallbacks;)Landroid/app/Application$ActivityLifecycleCallbacks;
    .locals 0

    .line 21
    iput-object p1, p0, Lcom/tkay/basead/a/a;->i:Landroid/app/Application$ActivityLifecycleCallbacks;

    return-object p1
.end method

.method private a(I)V
    .locals 4

    const/4 v0, 0x0

    const/4 v1, 0x2

    const/4 v2, 0x1

    if-ne p1, v1, :cond_1

    .line 135
    iget-object v3, p0, Lcom/tkay/basead/a/a;->e:Lcom/tkay/core/common/f/i;

    iget v3, v3, Lcom/tkay/core/common/f/i;->j:I

    if-eqz v3, :cond_0

    if-eq v3, v1, :cond_0

    .line 145
    iget-object v3, p0, Lcom/tkay/basead/a/a;->d:Landroid/view/View;

    if-eqz v3, :cond_2

    invoke-virtual {v3}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-eqz v3, :cond_2

    iget-object v3, p0, Lcom/tkay/basead/a/a;->d:Landroid/view/View;

    invoke-virtual {v3}, Landroid/view/View;->isShown()Z

    move-result v3

    if-eqz v3, :cond_2

    goto :goto_0

    .line 138
    :cond_0
    iget-object v3, p0, Lcom/tkay/basead/a/a;->d:Landroid/view/View;

    if-eqz v3, :cond_2

    invoke-virtual {v3}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-eqz v3, :cond_2

    iget-object v3, p0, Lcom/tkay/basead/a/a;->d:Landroid/view/View;

    invoke-virtual {v3}, Landroid/view/View;->isShown()Z

    move-result v3

    if-eqz v3, :cond_2

    iget-object v3, p0, Lcom/tkay/basead/a/a;->d:Landroid/view/View;

    invoke-static {v3}, Lcom/tkay/core/common/l/u;->b(Landroid/view/View;)Z

    move-result v3

    if-eqz v3, :cond_2

    :cond_1
    :goto_0
    move v0, v2

    :cond_2
    if-eqz v0, :cond_3

    .line 155
    invoke-direct {p0, p1}, Lcom/tkay/basead/a/a;->b(I)V

    return-void

    .line 157
    :cond_3
    iget-object v0, p0, Lcom/tkay/basead/a/a;->e:Lcom/tkay/core/common/f/i;

    iget v0, v0, Lcom/tkay/core/common/f/i;->j:I

    if-eq v0, v1, :cond_4

    iget-object v0, p0, Lcom/tkay/basead/a/a;->e:Lcom/tkay/core/common/f/i;

    iget v0, v0, Lcom/tkay/core/common/f/i;->j:I

    if-nez v0, :cond_6

    .line 162
    :cond_4
    new-instance v0, Lcom/tkay/basead/a/a$3;

    invoke-direct {v0, p0, p1}, Lcom/tkay/basead/a/a$3;-><init>(Lcom/tkay/basead/a/a;I)V

    .line 174
    iget-object p1, p0, Lcom/tkay/basead/a/a;->b:Lcom/tkay/core/common/l/a/c;

    if-nez p1, :cond_5

    .line 175
    new-instance p1, Lcom/tkay/core/common/l/a/c;

    iget-object v1, p0, Lcom/tkay/basead/a/a;->d:Landroid/view/View;

    invoke-virtual {v1}, Landroid/view/View;->getContext()Landroid/content/Context;

    invoke-direct {p1}, Lcom/tkay/core/common/l/a/c;-><init>()V

    iput-object p1, p0, Lcom/tkay/basead/a/a;->b:Lcom/tkay/core/common/l/a/c;

    .line 178
    :cond_5
    iget-object p1, p0, Lcom/tkay/basead/a/a;->b:Lcom/tkay/core/common/l/a/c;

    iget-object v1, p0, Lcom/tkay/basead/a/a;->d:Landroid/view/View;

    invoke-virtual {p1, v1, v0}, Lcom/tkay/core/common/l/a/c;->a(Landroid/view/View;Lcom/tkay/core/common/l/a/b;)V

    :cond_6
    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/a/a;I)V
    .locals 0

    .line 21
    invoke-direct {p0, p1}, Lcom/tkay/basead/a/a;->b(I)V

    return-void
.end method

.method private b(I)V
    .locals 2

    .line 185
    iget-object v0, p0, Lcom/tkay/basead/a/a;->f:Lcom/tkay/basead/a/a$a;

    if-eqz v0, :cond_0

    .line 186
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/basead/a/a$4;

    invoke-direct {v1, p0, p1}, Lcom/tkay/basead/a/a$4;-><init>(Lcom/tkay/basead/a/a;I)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/basead/a/a;)Z
    .locals 1

    .line 1112
    iget-object p0, p0, Lcom/tkay/basead/a/a;->e:Lcom/tkay/core/common/f/i;

    iget p0, p0, Lcom/tkay/core/common/f/i;->j:I

    const/4 v0, 0x4

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic c(Lcom/tkay/basead/a/a;)V
    .locals 1

    .line 1122
    iget-boolean v0, p0, Lcom/tkay/basead/a/a;->h:Z

    if-eqz v0, :cond_0

    .line 1123
    invoke-virtual {p0}, Lcom/tkay/basead/a/a;->a()V

    :cond_0
    return-void
.end method

.method static synthetic d(Lcom/tkay/basead/a/a;)Landroid/app/Application$ActivityLifecycleCallbacks;
    .locals 0

    .line 21
    iget-object p0, p0, Lcom/tkay/basead/a/a;->i:Landroid/app/Application$ActivityLifecycleCallbacks;

    return-object p0
.end method

.method private d()Z
    .locals 2

    .line 112
    iget-object v0, p0, Lcom/tkay/basead/a/a;->e:Lcom/tkay/core/common/f/i;

    iget v0, v0, Lcom/tkay/core/common/f/i;->j:I

    const/4 v1, 0x4

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private e()V
    .locals 1

    .line 122
    iget-boolean v0, p0, Lcom/tkay/basead/a/a;->h:Z

    if-eqz v0, :cond_0

    .line 123
    invoke-virtual {p0}, Lcom/tkay/basead/a/a;->a()V

    :cond_0
    return-void
.end method

.method static synthetic e(Lcom/tkay/basead/a/a;)V
    .locals 1

    const/4 v0, 0x2

    .line 21
    invoke-direct {p0, v0}, Lcom/tkay/basead/a/a;->a(I)V

    return-void
.end method

.method static synthetic f(Lcom/tkay/basead/a/a;)Lcom/tkay/basead/a/a$a;
    .locals 0

    .line 21
    iget-object p0, p0, Lcom/tkay/basead/a/a;->f:Lcom/tkay/basead/a/a$a;

    return-object p0
.end method

.method private f()V
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/tkay/basead/a/a;->a:Lcom/tkay/basead/d;

    invoke-virtual {v0}, Lcom/tkay/basead/d;->b()V

    return-void
.end method

.method private static synthetic g(Lcom/tkay/basead/a/a;)V
    .locals 0

    .line 1128
    iget-object p0, p0, Lcom/tkay/basead/a/a;->a:Lcom/tkay/basead/d;

    invoke-virtual {p0}, Lcom/tkay/basead/d;->b()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    const/4 v0, 0x1

    .line 92
    iput-boolean v0, p0, Lcom/tkay/basead/a/a;->h:Z

    .line 93
    iget-object v0, p0, Lcom/tkay/basead/a/a;->e:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    .line 94
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->F()I

    move-result v1

    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->G()I

    move-result v0

    if-ltz v0, :cond_0

    .line 95
    iget-object v0, p0, Lcom/tkay/basead/a/a;->a:Lcom/tkay/basead/d;

    invoke-virtual {v0}, Lcom/tkay/basead/d;->a()V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 2

    .line 100
    iget-object v0, p0, Lcom/tkay/basead/a/a;->i:Landroid/app/Application$ActivityLifecycleCallbacks;

    if-eqz v0, :cond_0

    .line 101
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Application;

    iget-object v1, p0, Lcom/tkay/basead/a/a;->i:Landroid/app/Application$ActivityLifecycleCallbacks;

    invoke-virtual {v0, v1}, Landroid/app/Application;->unregisterActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    const/4 v0, 0x0

    .line 102
    iput-object v0, p0, Lcom/tkay/basead/a/a;->i:Landroid/app/Application$ActivityLifecycleCallbacks;

    .line 104
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/a/a;->a:Lcom/tkay/basead/d;

    invoke-virtual {v0}, Lcom/tkay/basead/d;->c()V

    .line 106
    iget-object v0, p0, Lcom/tkay/basead/a/a;->b:Lcom/tkay/core/common/l/a/c;

    if-eqz v0, :cond_1

    .line 107
    invoke-virtual {v0}, Lcom/tkay/core/common/l/a/c;->b()V

    :cond_1
    return-void
.end method

.method public final c()V
    .locals 2

    .line 116
    iget-object v0, p0, Lcom/tkay/basead/a/a;->e:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->F()I

    move-result v0

    const/4 v1, 0x3

    if-ne v0, v1, :cond_0

    .line 117
    invoke-direct {p0, v1}, Lcom/tkay/basead/a/a;->a(I)V

    :cond_0
    return-void
.end method
