.class public final Lcom/tkay/expressad/foundation/h/i;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String; = "layout"

.field public static final b:Ljava/lang/String; = "id"

.field public static final c:Ljava/lang/String; = "drawable"

.field public static final d:Ljava/lang/String; = "color"

.field public static final e:Ljava/lang/String; = "style"

.field public static final f:Ljava/lang/String; = "anim"

.field public static final g:Ljava/lang/String; = "string"

.field public static final h:I = -0x1

.field private static final i:Ljava/lang/String; = "ResourceUtil"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I
    .locals 3

    const/4 v0, -0x1

    :try_start_0
    const-string v1, ""
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 44
    :try_start_1
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    .line 49
    :catch_0
    :try_start_2
    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/w;->a(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    if-eqz p0, :cond_0

    .line 51
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    .line 55
    :cond_0
    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/w;->a(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    return v0

    :cond_1
    if-eqz p0, :cond_2

    .line 60
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, p1, p2, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    return p0

    :catch_1
    :cond_2
    return v0
.end method

.method public static a(Landroid/content/Context;)Landroid/content/res/Resources;
    .locals 3

    const/4 v0, 0x0

    if-eqz p0, :cond_0

    .line 28
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 34
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Resource error:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    return-object v0
.end method
