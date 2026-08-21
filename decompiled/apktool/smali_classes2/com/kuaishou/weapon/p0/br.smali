.class public final Lcom/kuaishou/weapon/p0/br;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String; = "weapon.set"

.field private static b:Ljava/lang/String; = "Y29tLmt3YWkud2VhcG9u"

.field private static c:Ljava/lang/String; = "Y29tLmt3YWkud2VhcG9uLnNldHRpbmdz"

.field private static d:Ljava/lang/String; = "Y29tLmt3YWkud2VhcG9uLmZpbGU="

.field private static e:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    const/4 v0, 0x2

    const-string v1, "Y29tLmt3YWkud2VhcG9u"

    invoke-static {v1, v0}, Lcom/kuaishou/weapon/p0/c;->b(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/kuaishou/weapon/p0/br;->b:Ljava/lang/String;

    sget-object v1, Lcom/kuaishou/weapon/p0/br;->c:Ljava/lang/String;

    invoke-static {v1, v0}, Lcom/kuaishou/weapon/p0/c;->b(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/kuaishou/weapon/p0/br;->c:Ljava/lang/String;

    sget-object v1, Lcom/kuaishou/weapon/p0/br;->d:Ljava/lang/String;

    invoke-static {v1, v0}, Lcom/kuaishou/weapon/p0/c;->b(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kuaishou/weapon/p0/br;->d:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static declared-synchronized a(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    const-class v0, Lcom/kuaishou/weapon/p0/br;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kuaishou/weapon/p0/br;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    sget-object p0, Lcom/kuaishou/weapon/p0/br;->e:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object p0

    :cond_0
    :try_start_1
    invoke-static {p0}, Lcom/kuaishou/weapon/p0/br;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/kuaishou/weapon/p0/br;->e:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-static {p0, p1}, Landroid/provider/Settings$System;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const-string p0, ""

    return-object p0
.end method

.method private static b(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    invoke-static {p0, p1}, Lcom/kuaishou/weapon/p0/br;->c(Landroid/content/Context;Ljava/lang/String;)V

    invoke-static {p0, p1}, Lcom/kuaishou/weapon/p0/br;->d(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public static b(Landroid/content/Context;)Z
    .locals 2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-lt v0, v1, :cond_0

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Landroid/provider/Settings$System;->canWrite(Landroid/content/Context;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    const/4 p0, 0x1

    return p0
.end method

.method private static c(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    invoke-static {p0}, Lcom/kuaishou/weapon/p0/br;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    return-object v0

    :cond_0
    invoke-static {p0}, Lcom/kuaishou/weapon/p0/br;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    invoke-static {p0, v0}, Lcom/kuaishou/weapon/p0/br;->b(Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    return-object v0
.end method

.method private static c(Landroid/content/Context;Ljava/lang/String;)V
    .locals 3

    :try_start_0
    invoke-static {p0}, Lcom/kuaishou/weapon/p0/br;->b(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    sget-object v0, Lcom/kuaishou/weapon/p0/br;->c:Ljava/lang/String;

    invoke-static {p0, v0, p1}, Landroid/provider/Settings$System;->putString(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z

    const-string p1, "weapon.set"

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, p1, v0}, Landroid/provider/Settings$System;->putString(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method private static d(Landroid/content/Context;)Ljava/lang/String;
    .locals 5

    const-string v0, ""

    :try_start_0
    const-string v1, "re_po_rt"

    invoke-static {p0, v1}, Lcom/kuaishou/weapon/p0/h;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/kuaishou/weapon/p0/h;

    move-result-object v1

    const-string v2, "a1_p_s_p_s"

    invoke-virtual {v1, v2}, Lcom/kuaishou/weapon/p0/h;->e(Ljava/lang/String;)Z

    move-result v2

    const-string v3, "a1_p_s_p_s_c_b"

    invoke-virtual {v1, v3}, Lcom/kuaishou/weapon/p0/h;->e(Ljava/lang/String;)Z

    move-result v1

    if-nez v2, :cond_1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    move-object v3, v0

    goto :goto_1

    :cond_1
    :goto_0
    invoke-static {p0}, Lcom/kuaishou/weapon/p0/bg;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    :goto_1
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    goto :goto_2

    :cond_2
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v3

    invoke-virtual {v3}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v3

    :goto_2
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/kuaishou/weapon/p0/br;->b:Ljava/lang/String;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    if-nez v2, :cond_4

    if-eqz v1, :cond_3

    goto :goto_3

    :cond_3
    move-object v1, v0

    goto :goto_4

    :cond_4
    :goto_3
    invoke-static {p0}, Lcom/kuaishou/weapon/p0/bg;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    :goto_4
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    const-string v2, "RISK"

    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_6

    :cond_5
    const-string v1, "0"

    :cond_6
    new-instance v2, Ljava/lang/StringBuffer;

    invoke-direct {v2, v1}, Ljava/lang/StringBuffer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/lang/StringBuffer;->reverse()Ljava/lang/StringBuffer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|"

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/kuaishou/weapon/p0/bm;

    invoke-direct {v2, p0}, Lcom/kuaishou/weapon/p0/bm;-><init>(Landroid/content/Context;)V

    const-string p0, "OTUzc3E1N0w5NTIzMW80OUQxMGo3R1dFa0ZiandHT0w="

    invoke-virtual {v2, v1, p0}, Lcom/kuaishou/weapon/p0/bm;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    return-object v0
.end method

.method private static d(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    invoke-static {p0}, Lcom/kuaishou/weapon/p0/df;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/df;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kuaishou/weapon/p0/df;->c(Ljava/lang/String;)V

    return-void
.end method

.method private static e(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    sget-object v0, Lcom/kuaishou/weapon/p0/br;->c:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/kuaishou/weapon/p0/br;->a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0}, Lcom/kuaishou/weapon/p0/br;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    return-object v0

    :cond_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-static {p0, v0}, Lcom/kuaishou/weapon/p0/br;->d(Landroid/content/Context;Ljava/lang/String;)V

    return-object v0

    :cond_1
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {p0, v1}, Lcom/kuaishou/weapon/p0/br;->c(Landroid/content/Context;Ljava/lang/String;)V

    return-object v1

    :cond_2
    const-string p0, ""

    return-object p0
.end method

.method private static f(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    :try_start_0
    invoke-static {p0}, Lcom/kuaishou/weapon/p0/df;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/df;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kuaishou/weapon/p0/df;->d()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const-string p0, ""

    return-object p0
.end method
