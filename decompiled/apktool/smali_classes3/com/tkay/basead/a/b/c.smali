.class public final Lcom/tkay/basead/a/b/c;
.super Ljava/lang/Object;


# static fields
.field public static final a:I = 0x0

.field public static final b:I = -0x1

.field public static final c:I = 0x64

.field private static d:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private static e:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/basead/mraid/MraidWebView;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 34
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/tkay/basead/a/b/c;->d:Ljava/util/Map;

    .line 39
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v1, 0x3

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    sput-object v0, Lcom/tkay/basead/a/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)Ljava/lang/String;
    .locals 1

    .line 62
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p0, p0, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "_"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Ljava/lang/String;I)V
    .locals 1

    .line 47
    sget-object v0, Lcom/tkay/basead/a/b/c;->d:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    if-eqz v0, :cond_0

    .line 48
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    if-ge v0, p1, :cond_1

    .line 49
    :cond_0
    sget-object v0, Lcom/tkay/basead/a/b/c;->d:Ljava/util/Map;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/tkay/basead/mraid/MraidWebView;)V
    .locals 1

    .line 54
    sget-object v0, Lcom/tkay/basead/a/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/h;ILcom/tkay/core/common/f/j;)Z
    .locals 2

    .line 120
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 121
    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->x()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 122
    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->x()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->S()I

    move-result p1

    invoke-static {p0, p1}, Lcom/tkay/basead/a/b/c;->b(Ljava/lang/String;I)Z

    move-result p0

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0

    .line 128
    :cond_1
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v0, "3"

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 129
    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->x()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 131
    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->x()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->S()I

    move-result p1

    invoke-static {p0, p1}, Lcom/tkay/basead/a/b/c;->b(Ljava/lang/String;I)Z

    move-result p0

    return p0

    :cond_2
    const/4 p0, 0x1

    return p0
.end method

.method public static a(Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;)Z
    .locals 3

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 95
    :cond_0
    iget-object v1, p1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    .line 97
    iget v2, p1, Lcom/tkay/core/common/f/i;->j:I

    invoke-static {p0, v2, v1}, Lcom/tkay/basead/a/b/c;->a(Lcom/tkay/core/common/f/h;ILcom/tkay/core/common/f/j;)Z

    move-result v2

    if-nez v2, :cond_1

    return v0

    .line 101
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->g()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 102
    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->V()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 103
    sget-object v0, Lcom/tkay/basead/a/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {p1, p0}, Lcom/tkay/basead/a/b/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    goto :goto_0

    :cond_2
    const/4 v2, 0x1

    :cond_3
    :goto_0
    return v2
.end method

.method public static a(Ljava/lang/String;)Z
    .locals 1

    .line 42
    sget-object v0, Lcom/tkay/basead/a/b/c;->d:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    if-eqz p0, :cond_0

    .line 43
    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static b(Ljava/lang/String;)Lcom/tkay/basead/mraid/MraidWebView;
    .locals 1

    .line 58
    sget-object v0, Lcom/tkay/basead/a/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/tkay/basead/mraid/MraidWebView;

    return-object p0
.end method

.method public static b(Ljava/lang/String;I)Z
    .locals 1

    .line 79
    invoke-static {}, Lcom/tkay/core/common/a/j;->a()Lcom/tkay/core/common/a/j;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/tkay/core/common/a/j;->a(Ljava/lang/String;I)Z

    move-result p0

    return p0
.end method

.method public static c(Ljava/lang/String;)Z
    .locals 4

    .line 1116
    invoke-static {p0}, Lcom/tkay/core/common/l/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 71
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/res/d;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/d;

    move-result-object v0

    .line 1369
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 p0, 0x0

    return p0

    .line 1374
    :cond_0
    new-instance v1, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v3, 0x1

    invoke-virtual {v0, v3}, Lcom/tkay/core/common/res/d;->a(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ".0"

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 1378
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result p0

    return p0
.end method
