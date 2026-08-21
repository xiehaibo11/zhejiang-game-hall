.class public final Lcom/tkay/expressad/foundation/f/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/foundation/f/b$a;
    }
.end annotation


# static fields
.field public static a:I = -0x2

.field public static b:I = -0x2

.field public static volatile c:Z


# instance fields
.field private final d:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/foundation/f/a/a;",
            ">;"
        }
    .end annotation
.end field

.field private final e:Landroid/widget/RelativeLayout$LayoutParams;

.field private f:Lcom/tkay/expressad/d/a;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 3

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 42
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/f/b;->d:Ljava/util/concurrent/ConcurrentHashMap;

    .line 48
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    sget v1, Lcom/tkay/expressad/foundation/f/b;->a:I

    sget v2, Lcom/tkay/expressad/foundation/f/b;->b:I

    invoke-direct {v0, v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/f/b;->e:Landroid/widget/RelativeLayout$LayoutParams;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    .line 29
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/f/b;-><init>()V

    return-void
.end method

.method public static a(Landroid/content/Context;)Landroid/app/Activity;
    .locals 4

    .line 55
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->g()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    .line 58
    :try_start_0
    instance-of v2, v0, Landroid/app/Activity;

    if-eqz v2, :cond_0

    .line 59
    check-cast v0, Landroid/app/Activity;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    goto :goto_0

    :cond_0
    move-object v0, v1

    .line 61
    :goto_0
    :try_start_1
    instance-of v2, p0, Landroid/app/Activity;

    const/16 v3, 0x11

    if-eqz v2, :cond_2

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v2, v3, :cond_1

    move-object v2, p0

    check-cast v2, Landroid/app/Activity;

    invoke-virtual {v2}, Landroid/app/Activity;->isDestroyed()Z

    move-result v2

    if-nez v2, :cond_2

    .line 62
    :cond_1
    check-cast p0, Landroid/app/Activity;

    move-object v0, p0

    :cond_2
    if-eqz v0, :cond_4

    .line 73
    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result p0

    if-nez p0, :cond_4

    sget p0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt p0, v3, :cond_3

    invoke-virtual {v0}, Landroid/app/Activity;->isDestroyed()Z

    move-result p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    if-eqz p0, :cond_3

    goto :goto_2

    :cond_3
    move-object v1, v0

    goto :goto_2

    :catch_0
    move-exception p0

    move-object v1, v0

    goto :goto_1

    :catch_1
    move-exception p0

    .line 77
    :goto_1
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_2
    return-object v1
.end method

.method public static a()Lcom/tkay/expressad/foundation/f/b;
    .locals 1

    .line 39
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b$a;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    return-object v0
.end method

.method private a(Ljava/lang/String;IIIFFFLjava/lang/String;Ljava/lang/String;)V
    .locals 9

    .line 127
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/f/a/a;

    move-result-object v0

    .line 128
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    move v2, p5

    .line 129
    invoke-static {v1, p5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    move v3, p6

    invoke-static {v1, p6}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    move v4, p2

    int-to-float v4, v4

    invoke-static {v1, v4}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v4

    move v5, p3

    int-to-float v5, v5

    invoke-static {v1, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v5

    move v6, p4

    int-to-float v6, v6

    invoke-static {v1, v6}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v6

    move v1, v2

    move v2, v3

    move v3, v4

    move v4, v5

    move v5, v6

    move/from16 v6, p7

    move-object/from16 v7, p8

    move-object/from16 v8, p9

    invoke-virtual/range {v0 .. v8}, Lcom/tkay/expressad/foundation/f/a/a;->a(IIIIIFLjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;ILandroid/view/ViewGroup;)V
    .locals 6

    .line 115
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/f/a/a;

    move-result-object v0

    .line 116
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/f/a/a;->c()Lcom/tkay/expressad/widget/FeedBackButton;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 118
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/foundation/f/a/a;->a(I)V

    if-nez p2, :cond_0

    .line 120
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const/4 v4, 0x0

    const/4 v5, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v3, p3

    invoke-virtual/range {v0 .. v5}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Landroid/content/Context;Landroid/view/ViewGroup;Landroid/view/ViewGroup$LayoutParams;Lcom/tkay/expressad/foundation/f/a;)V

    :cond_0
    return-void
.end method

.method private a(Ljava/lang/String;Landroid/content/Context;Landroid/view/ViewGroup;Landroid/view/ViewGroup$LayoutParams;)V
    .locals 6

    const/4 v5, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    .line 133
    invoke-virtual/range {v0 .. v5}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Landroid/content/Context;Landroid/view/ViewGroup;Landroid/view/ViewGroup$LayoutParams;Lcom/tkay/expressad/foundation/f/a;)V

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/tkay/expressad/widget/a/a;)Z
    .locals 0

    if-nez p1, :cond_0

    const/4 p0, 0x0

    return p0

    .line 109
    :cond_0
    invoke-static {p0, p1}, Lcom/tkay/expressad/foundation/f/b;->b(Landroid/content/Context;Lcom/tkay/expressad/widget/a/a;)Z

    move-result p0

    return p0
.end method

.method private static b(Landroid/content/Context;Lcom/tkay/expressad/widget/a/a;)Z
    .locals 3

    .line 84
    invoke-static {p0}, Lcom/tkay/expressad/foundation/f/b;->a(Landroid/content/Context;)Landroid/app/Activity;

    move-result-object p0

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    if-eqz p1, :cond_1

    .line 86
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x11

    if-lt v1, v2, :cond_0

    invoke-virtual {p0}, Landroid/app/Activity;->isDestroyed()Z

    move-result v1

    if-eqz v1, :cond_0

    return v0

    .line 90
    :cond_0
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/expressad/widget/a/a;->isShowing()Z

    move-result v1

    if-nez v1, :cond_1

    invoke-virtual {p0}, Landroid/app/Activity;->isFinishing()Z

    move-result p0

    if-nez p0, :cond_1

    .line 91
    invoke-virtual {p1}, Lcom/tkay/expressad/widget/a/a;->show()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    move v0, p0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 95
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return v0
.end method

.method private c(Ljava/lang/String;I)V
    .locals 1

    .line 181
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/f/a/a;

    move-result-object p1

    const/4 v0, 0x1

    if-ne p2, v0, :cond_0

    .line 183
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/f/a/a;->b()V

    return-void

    .line 185
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/f/a/a;->a()V

    return-void
.end method

.method private d(Ljava/lang/String;)Lcom/tkay/expressad/foundation/f/a/a;
    .locals 1

    .line 225
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 226
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object p1

    .line 228
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/b;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 229
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/b;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/f/a/a;

    goto :goto_0

    :cond_1
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method

.method private e(Ljava/lang/String;)V
    .locals 0

    .line 246
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/f/a/a;

    move-result-object p1

    .line 247
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/f/a/a;->e()Lcom/tkay/expressad/foundation/d/c;

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/f/a/a;
    .locals 2

    .line 208
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 209
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object p1

    .line 211
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/b;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 212
    new-instance v0, Lcom/tkay/expressad/foundation/f/a/a;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/foundation/f/a/a;-><init>(Ljava/lang/String;)V

    .line 213
    iget-object v1, p0, Lcom/tkay/expressad/foundation/f/b;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 215
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/b;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/f/a/a;

    :goto_0
    if-nez v0, :cond_2

    .line 218
    new-instance v0, Lcom/tkay/expressad/foundation/f/a/a;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/foundation/f/a/a;-><init>(Ljava/lang/String;)V

    .line 219
    iget-object v1, p0, Lcom/tkay/expressad/foundation/f/b;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    return-object v0
.end method

.method public final a(Ljava/lang/String;I)V
    .locals 0

    .line 198
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/f/a/a;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/foundation/f/a/a;->b(I)V

    return-void
.end method

.method public final a(Ljava/lang/String;Landroid/content/Context;Landroid/view/ViewGroup;Landroid/view/ViewGroup$LayoutParams;Lcom/tkay/expressad/foundation/f/a;)V
    .locals 2

    .line 149
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 152
    :cond_0
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/f/a/a;

    move-result-object v0

    if-eqz p5, :cond_1

    .line 154
    new-instance v1, Lcom/tkay/expressad/foundation/f/a/a$a;

    invoke-direct {v1, p1, p5}, Lcom/tkay/expressad/foundation/f/a/a$a;-><init>(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/f/a/a;->a(Lcom/tkay/expressad/foundation/f/a/a$a;)V

    .line 156
    :cond_1
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/f/a/a;->c()Lcom/tkay/expressad/widget/FeedBackButton;

    move-result-object p1

    if-eqz p1, :cond_5

    if-nez p4, :cond_2

    .line 159
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p4

    invoke-virtual {p4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p4

    const/high16 p5, 0x41200000    # 10.0f

    invoke-static {p4, p5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p4

    .line 160
    iget-object p5, p0, Lcom/tkay/expressad/foundation/f/b;->e:Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p5, p4, p4, p4, p4}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 161
    iget-object p4, p0, Lcom/tkay/expressad/foundation/f/b;->e:Landroid/widget/RelativeLayout$LayoutParams;

    .line 163
    :cond_2
    invoke-virtual {p1}, Lcom/tkay/expressad/widget/FeedBackButton;->getParent()Landroid/view/ViewParent;

    move-result-object p5

    check-cast p5, Landroid/view/ViewGroup;

    if-eqz p5, :cond_3

    .line 165
    invoke-virtual {p5, p1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 167
    :cond_3
    invoke-static {p2}, Lcom/tkay/expressad/foundation/f/b;->a(Landroid/content/Context;)Landroid/app/Activity;

    move-result-object p2

    if-eqz p2, :cond_4

    if-nez p3, :cond_4

    const p3, 0x1020002

    .line 169
    invoke-virtual {p2, p3}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object p2

    move-object p3, p2

    check-cast p3, Landroid/view/ViewGroup;

    :cond_4
    if-eqz p3, :cond_5

    .line 173
    invoke-virtual {p3, p1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 174
    invoke-virtual {p3, p1, p4}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_5
    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 194
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/f/a/a;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/foundation/f/a/a;->a(Lcom/tkay/expressad/foundation/d/c;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V
    .locals 2

    .line 143
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/f/a/a;

    move-result-object v0

    .line 145
    new-instance v1, Lcom/tkay/expressad/foundation/f/a/a$a;

    invoke-direct {v1, p1, p2}, Lcom/tkay/expressad/foundation/f/a/a$a;-><init>(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/f/a/a;->a(Lcom/tkay/expressad/foundation/f/a/a$a;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/expressad/widget/FeedBackButton;)V
    .locals 0

    .line 236
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/f/a/a;

    move-result-object p1

    .line 237
    invoke-virtual {p1, p2}, Lcom/tkay/expressad/foundation/f/a/a;->a(Lcom/tkay/expressad/widget/FeedBackButton;)V

    return-void
.end method

.method public final b(Ljava/lang/String;)Lcom/tkay/expressad/widget/FeedBackButton;
    .locals 0

    .line 241
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/f/a/a;

    move-result-object p1

    .line 242
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/f/a/a;->c()Lcom/tkay/expressad/widget/FeedBackButton;

    move-result-object p1

    return-object p1
.end method

.method public final b(Ljava/lang/String;I)V
    .locals 0

    .line 202
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/f/a/a;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/foundation/f/a/a;->c(I)V

    return-void
.end method

.method public final b()Z
    .locals 1

    .line 138
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->c()Lcom/tkay/expressad/d/a;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/f/b;->f:Lcom/tkay/expressad/d/a;

    .line 140
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->K()I

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final c(Ljava/lang/String;)V
    .locals 3

    const/4 v0, 0x0

    .line 1225
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 1226
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_0
    move-object v1, p1

    .line 1228
    :goto_0
    iget-object v2, p0, Lcom/tkay/expressad/foundation/f/b;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v2, v1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 1229
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/b;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/f/a/a;

    :cond_1
    if-eqz v0, :cond_2

    .line 256
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/f/a/a;->d()V

    .line 258
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/foundation/f/b;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 260
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method
