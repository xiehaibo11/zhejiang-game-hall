.class public final Lcom/mbridge/msdk/widget/custom/b/c;
.super Ljava/lang/Object;
.source "InflaterUtil.java"


# static fields
.field private static a:Lcom/mbridge/msdk/widget/custom/b/c;


# instance fields
.field private b:Lcom/mbridge/msdk/widget/custom/a/b;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p1, 0x0

    .line 15
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/b/c;->b:Lcom/mbridge/msdk/widget/custom/a/b;

    .line 26
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/b/c;->b:Lcom/mbridge/msdk/widget/custom/a/b;

    const-string v0, ""

    .line 27
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/custom/a/b;->a(Ljava/lang/String;)V

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/mbridge/msdk/widget/custom/b/c;
    .locals 1

    .line 19
    sget-object v0, Lcom/mbridge/msdk/widget/custom/b/c;->a:Lcom/mbridge/msdk/widget/custom/b/c;

    if-nez v0, :cond_0

    .line 20
    new-instance v0, Lcom/mbridge/msdk/widget/custom/b/c;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/widget/custom/b/c;-><init>(Landroid/content/Context;)V

    sput-object v0, Lcom/mbridge/msdk/widget/custom/b/c;->a:Lcom/mbridge/msdk/widget/custom/b/c;

    .line 22
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/widget/custom/b/c;->a:Lcom/mbridge/msdk/widget/custom/b/c;

    return-object p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Landroid/view/View;
    .locals 1

    .line 32
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 33
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 34
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 35
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/b/c;->b:Lcom/mbridge/msdk/widget/custom/a/b;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/widget/custom/a/b;->f(Ljava/lang/String;)Landroid/view/View;

    move-result-object p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method
