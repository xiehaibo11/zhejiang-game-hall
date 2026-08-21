.class public final Lcom/loc/ar;
.super Ljava/lang/Object;
.source "RomIdentifier.java"


# static fields
.field private static volatile a:Lcom/loc/aq;

.field private static b:Ljava/util/Properties;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    invoke-static {}, Lcom/loc/ar;->b()Ljava/util/Properties;

    move-result-object v0

    sput-object v0, Lcom/loc/ar;->b:Ljava/util/Properties;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/loc/aq;
    .locals 5

    sget-object v0, Lcom/loc/ar;->a:Lcom/loc/aq;

    if-nez v0, :cond_4

    const-class v0, Lcom/loc/ar;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/loc/ar;->a:Lcom/loc/aq;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_3

    :try_start_1
    sget-object v1, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-static {v1}, Lcom/loc/ar;->a(Ljava/lang/String;)Lcom/loc/aq;

    move-result-object v1

    const-string v2, ""

    invoke-virtual {v1}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_0

    goto/16 :goto_0

    :cond_0
    const/16 v1, 0xb

    new-array v1, v1, [Ljava/lang/String;

    const/4 v2, 0x0

    sget-object v3, Lcom/loc/aq;->a:Lcom/loc/aq;

    invoke-virtual {v3}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x1

    sget-object v3, Lcom/loc/aq;->b:Lcom/loc/aq;

    invoke-virtual {v3}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x2

    sget-object v3, Lcom/loc/aq;->c:Lcom/loc/aq;

    invoke-virtual {v3}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x3

    sget-object v3, Lcom/loc/aq;->d:Lcom/loc/aq;

    invoke-virtual {v3}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x4

    sget-object v3, Lcom/loc/aq;->e:Lcom/loc/aq;

    invoke-virtual {v3}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x5

    sget-object v3, Lcom/loc/aq;->f:Lcom/loc/aq;

    invoke-virtual {v3}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x6

    sget-object v3, Lcom/loc/aq;->g:Lcom/loc/aq;

    invoke-virtual {v3}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x7

    sget-object v3, Lcom/loc/aq;->i:Lcom/loc/aq;

    invoke-virtual {v3}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v2

    const/16 v2, 0x8

    sget-object v3, Lcom/loc/aq;->j:Lcom/loc/aq;

    invoke-virtual {v3}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v2

    const/16 v2, 0x9

    sget-object v3, Lcom/loc/aq;->k:Lcom/loc/aq;

    invoke-virtual {v3}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v2

    const/16 v2, 0xa

    sget-object v3, Lcom/loc/aq;->l:Lcom/loc/aq;

    invoke-virtual {v3}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v2

    invoke-static {v1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {v2}, Lcom/loc/ar;->a(Ljava/lang/String;)Lcom/loc/aq;

    move-result-object v2

    const-string v3, ""

    invoke-virtual {v2}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_1

    move-object v1, v2

    goto :goto_0

    :cond_2
    sget-object v1, Lcom/loc/aq;->m:Lcom/loc/aq;

    :goto_0
    sput-object v1, Lcom/loc/ar;->a:Lcom/loc/aq;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catch_0
    move-exception v1

    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_1
    monitor-exit v0

    goto :goto_2

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw v1

    :cond_4
    :goto_2
    sget-object v0, Lcom/loc/ar;->a:Lcom/loc/aq;

    return-object v0
.end method

.method private static a(Ljava/lang/String;)Lcom/loc/aq;
    .locals 1

    if-eqz p0, :cond_d

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    if-gtz v0, :cond_0

    goto/16 :goto_0

    :cond_0
    sget-object v0, Lcom/loc/aq;->a:Lcom/loc/aq;

    invoke-virtual {v0}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    sget-object p0, Lcom/loc/aq;->a:Lcom/loc/aq;

    invoke-static {p0}, Lcom/loc/ar;->a(Lcom/loc/aq;)Z

    move-result v0

    if-eqz v0, :cond_c

    return-object p0

    :cond_1
    sget-object v0, Lcom/loc/aq;->b:Lcom/loc/aq;

    invoke-virtual {v0}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    sget-object p0, Lcom/loc/aq;->b:Lcom/loc/aq;

    invoke-static {p0}, Lcom/loc/ar;->b(Lcom/loc/aq;)Z

    move-result v0

    if-eqz v0, :cond_c

    return-object p0

    :cond_2
    sget-object v0, Lcom/loc/aq;->c:Lcom/loc/aq;

    invoke-virtual {v0}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    sget-object p0, Lcom/loc/aq;->c:Lcom/loc/aq;

    invoke-static {p0}, Lcom/loc/ar;->c(Lcom/loc/aq;)Z

    move-result v0

    if-eqz v0, :cond_c

    return-object p0

    :cond_3
    sget-object v0, Lcom/loc/aq;->d:Lcom/loc/aq;

    invoke-virtual {v0}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    sget-object p0, Lcom/loc/aq;->d:Lcom/loc/aq;

    invoke-static {p0}, Lcom/loc/ar;->d(Lcom/loc/aq;)Z

    move-result v0

    if-eqz v0, :cond_c

    return-object p0

    :cond_4
    sget-object v0, Lcom/loc/aq;->e:Lcom/loc/aq;

    invoke-virtual {v0}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    sget-object p0, Lcom/loc/aq;->e:Lcom/loc/aq;

    invoke-static {p0}, Lcom/loc/ar;->e(Lcom/loc/aq;)Z

    move-result v0

    if-eqz v0, :cond_c

    return-object p0

    :cond_5
    sget-object v0, Lcom/loc/aq;->f:Lcom/loc/aq;

    invoke-virtual {v0}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    sget-object p0, Lcom/loc/aq;->f:Lcom/loc/aq;

    invoke-static {p0}, Lcom/loc/ar;->f(Lcom/loc/aq;)Z

    move-result v0

    if-eqz v0, :cond_c

    return-object p0

    :cond_6
    sget-object v0, Lcom/loc/aq;->g:Lcom/loc/aq;

    invoke-virtual {v0}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    sget-object p0, Lcom/loc/aq;->g:Lcom/loc/aq;

    invoke-static {p0}, Lcom/loc/ar;->g(Lcom/loc/aq;)Z

    move-result v0

    if-eqz v0, :cond_c

    return-object p0

    :cond_7
    sget-object v0, Lcom/loc/aq;->h:Lcom/loc/aq;

    invoke-virtual {v0}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_8

    sget-object p0, Lcom/loc/aq;->h:Lcom/loc/aq;

    invoke-static {p0}, Lcom/loc/ar;->h(Lcom/loc/aq;)Z

    move-result v0

    if-eqz v0, :cond_c

    return-object p0

    :cond_8
    sget-object v0, Lcom/loc/aq;->i:Lcom/loc/aq;

    invoke-virtual {v0}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_9

    sget-object p0, Lcom/loc/aq;->i:Lcom/loc/aq;

    invoke-static {p0}, Lcom/loc/ar;->i(Lcom/loc/aq;)Z

    move-result v0

    if-eqz v0, :cond_c

    return-object p0

    :cond_9
    sget-object v0, Lcom/loc/aq;->j:Lcom/loc/aq;

    invoke-virtual {v0}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_a

    sget-object p0, Lcom/loc/aq;->j:Lcom/loc/aq;

    invoke-static {p0}, Lcom/loc/ar;->j(Lcom/loc/aq;)Z

    move-result v0

    if-eqz v0, :cond_c

    return-object p0

    :cond_a
    sget-object v0, Lcom/loc/aq;->k:Lcom/loc/aq;

    invoke-virtual {v0}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_b

    sget-object p0, Lcom/loc/aq;->k:Lcom/loc/aq;

    invoke-static {p0}, Lcom/loc/ar;->k(Lcom/loc/aq;)Z

    move-result v0

    if-eqz v0, :cond_c

    return-object p0

    :cond_b
    sget-object v0, Lcom/loc/aq;->l:Lcom/loc/aq;

    invoke-virtual {v0}, Lcom/loc/aq;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_c

    sget-object p0, Lcom/loc/aq;->l:Lcom/loc/aq;

    invoke-static {p0}, Lcom/loc/ar;->l(Lcom/loc/aq;)Z

    move-result v0

    if-eqz v0, :cond_c

    return-object p0

    :cond_c
    sget-object p0, Lcom/loc/aq;->m:Lcom/loc/aq;

    return-object p0

    :cond_d
    :goto_0
    sget-object p0, Lcom/loc/aq;->m:Lcom/loc/aq;

    return-object p0
.end method

.method private static a(Lcom/loc/aq;Ljava/lang/String;)V
    .locals 1

    const-string v0, "([\\d.]+)[^\\d]*"

    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/regex/Matcher;->find()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    :try_start_0
    invoke-virtual {p1, v0}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/loc/aq;->a(Ljava/lang/String;)V

    const-string v0, "\\."

    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    aget-object p1, p1, v0

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/loc/aq;->a(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    return-void
.end method

.method private static a(Lcom/loc/aq;)Z
    .locals 1

    const-string v0, "ro.miui.ui.version.name"

    invoke-static {v0}, Lcom/loc/ar;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "ro.build.version.incremental"

    invoke-static {v0}, Lcom/loc/ar;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/loc/ar;->a(Lcom/loc/aq;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/loc/aq;->b(Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static b(Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    sget-object v0, Lcom/loc/ar;->b:Ljava/util/Properties;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "["

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "]"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v4, 0x0

    invoke-virtual {v0, v1, v4}, Ljava/util/Properties;->getProperty(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-static {p0}, Lcom/loc/ar;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const-string p0, ""

    invoke-virtual {v0, v2, p0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v3, p0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static b()Ljava/util/Properties;
    .locals 3

    new-instance v0, Ljava/util/Properties;

    invoke-direct {v0}, Ljava/util/Properties;-><init>()V

    :try_start_0
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v1

    const-string v2, "getprop"

    invoke-virtual {v1, v2}, Ljava/lang/Runtime;->exec(Ljava/lang/String;)Ljava/lang/Process;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Process;->getInputStream()Ljava/io/InputStream;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/Properties;->load(Ljava/io/InputStream;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method private static b(Lcom/loc/aq;)Z
    .locals 2

    const-string v0, "ro.flyme.published"

    invoke-static {v0}, Lcom/loc/ar;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "ro.meizu.setupwizard.flyme"

    invoke-static {v1}, Lcom/loc/ar;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const-string v0, "ro.build.display.id"

    invoke-static {v0}, Lcom/loc/ar;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/loc/ar;->a(Lcom/loc/aq;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/loc/aq;->b(Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0
.end method

.method private static c(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v1

    const-string v2, "getprop "

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/Runtime;->exec(Ljava/lang/String;)Ljava/lang/Process;

    move-result-object p0

    new-instance v1, Ljava/io/BufferedReader;

    new-instance v2, Ljava/io/InputStreamReader;

    invoke-virtual {p0}, Ljava/lang/Process;->getInputStream()Ljava/io/InputStream;

    move-result-object p0

    invoke-direct {v2, p0}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    const/16 p0, 0x400

    invoke-direct {v1, v2, p0}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;I)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-virtual {v1}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    return-object p0

    :catchall_0
    move-exception p0

    move-object v0, v1

    goto :goto_0

    :catch_1
    nop

    goto :goto_1

    :catchall_1
    move-exception p0

    :goto_0
    if-eqz v0, :cond_0

    :try_start_3
    invoke-virtual {v0}, Ljava/io/BufferedReader;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_2

    :catch_2
    :cond_0
    throw p0

    :catch_3
    move-object v1, v0

    :goto_1
    if-eqz v1, :cond_1

    :try_start_4
    invoke-virtual {v1}, Ljava/io/BufferedReader;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_4

    :catch_4
    :cond_1
    return-object v0
.end method

.method private static c(Lcom/loc/aq;)Z
    .locals 2

    const-string v0, "ro.build.version.emui"

    invoke-static {v0}, Lcom/loc/ar;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {p0, v0}, Lcom/loc/ar;->a(Lcom/loc/aq;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/loc/aq;->b(Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static d(Lcom/loc/aq;)Z
    .locals 2

    const-string v0, "ro.build.version.opporom"

    invoke-static {v0}, Lcom/loc/ar;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {p0, v0}, Lcom/loc/ar;->a(Lcom/loc/aq;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/loc/aq;->b(Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static e(Lcom/loc/aq;)Z
    .locals 2

    const-string v0, "ro.vivo.os.build.display.id"

    invoke-static {v0}, Lcom/loc/ar;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {p0, v0}, Lcom/loc/ar;->a(Lcom/loc/aq;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/loc/aq;->b(Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static f(Lcom/loc/aq;)Z
    .locals 2

    const-string v0, "ro.smartisan.version"

    invoke-static {v0}, Lcom/loc/ar;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {p0, v0}, Lcom/loc/ar;->a(Lcom/loc/aq;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/loc/aq;->b(Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static g(Lcom/loc/aq;)Z
    .locals 2

    const-string v0, "ro.build.display.id"

    invoke-static {v0}, Lcom/loc/ar;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "amigo([\\d.]+)[a-zA-Z]*"

    invoke-virtual {v0, v1}, Ljava/lang/String;->matches(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-static {p0, v0}, Lcom/loc/ar;->a(Lcom/loc/aq;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/loc/aq;->b(Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static h(Lcom/loc/aq;)Z
    .locals 2

    const-string v0, "ro.letv.release.version"

    invoke-static {v0}, Lcom/loc/ar;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {p0, v0}, Lcom/loc/ar;->a(Lcom/loc/aq;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/loc/aq;->b(Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static i(Lcom/loc/aq;)Z
    .locals 2

    const-string v0, "ro.build.sense.version"

    invoke-static {v0}, Lcom/loc/ar;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {p0, v0}, Lcom/loc/ar;->a(Lcom/loc/aq;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/loc/aq;->b(Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static j(Lcom/loc/aq;)Z
    .locals 2

    const-string v0, "sys.lge.lgmdm_version"

    invoke-static {v0}, Lcom/loc/ar;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {p0, v0}, Lcom/loc/ar;->a(Lcom/loc/aq;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/loc/aq;->b(Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static k(Lcom/loc/aq;)Z
    .locals 2

    const-string v0, "ro.com.google.clientidbase"

    invoke-static {v0}, Lcom/loc/ar;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "android-google"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "ro.build.version.release"

    invoke-static {v0}, Lcom/loc/ar;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    invoke-virtual {p0, v1}, Lcom/loc/aq;->a(I)V

    invoke-virtual {p0, v0}, Lcom/loc/aq;->b(Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static l(Lcom/loc/aq;)Z
    .locals 2

    const-string v0, "ro.build.nubia.rom.code"

    invoke-static {v0}, Lcom/loc/ar;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {p0, v0}, Lcom/loc/ar;->a(Lcom/loc/aq;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/loc/aq;->b(Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method
