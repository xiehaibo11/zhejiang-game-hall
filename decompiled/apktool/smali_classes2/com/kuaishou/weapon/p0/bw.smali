.class public Lcom/kuaishou/weapon/p0/bw;
.super Ljava/lang/Object;


# static fields
.field private static a:Ljava/lang/String; = "Y29tLmt3YWkud2VhcG9uLmNvbmp1cmU=\n"

.field private static b:Ljava/lang/String; = "Y29tLmt3YWkud2VhcG9uLmNvbmp1cmU=\n"


# direct methods
.method static constructor <clinit>()V
    .locals 2

    const/4 v0, 0x2

    const-string v1, "Y29tLmt3YWkud2VhcG9uLmNvbmp1cmU=\n"

    invoke-static {v1, v0}, Lcom/kuaishou/weapon/p0/c;->b(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/kuaishou/weapon/p0/bw;->a:Ljava/lang/String;

    sget-object v1, Lcom/kuaishou/weapon/p0/bw;->b:Ljava/lang/String;

    invoke-static {v1, v0}, Lcom/kuaishou/weapon/p0/c;->b(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kuaishou/weapon/p0/bw;->b:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 5

    invoke-static {p0}, Lcom/kuaishou/weapon/p0/bw;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, "0"

    const-string v2, "1"

    if-eqz v0, :cond_0

    move-object v0, v1

    goto :goto_0

    :cond_0
    move-object v0, v2

    :goto_0
    invoke-static {p0}, Lcom/kuaishou/weapon/p0/bw;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_1

    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    goto :goto_1

    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v3}, Lcom/kuaishou/weapon/p0/bw;->b(Landroid/content/Context;Ljava/lang/String;)V

    move-object p0, v0

    :goto_1
    return-object p0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-lt v0, v1, :cond_0

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/provider/Settings$System;->canWrite(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    sget-object v0, Lcom/kuaishou/weapon/p0/bw;->a:Ljava/lang/String;

    invoke-static {p0, v0, p1}, Landroid/provider/Settings$System;->putString(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public static b(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    invoke-static {p0}, Lcom/kuaishou/weapon/p0/bw;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0}, Lcom/kuaishou/weapon/p0/bw;->d(Landroid/content/Context;)Ljava/lang/String;

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

    invoke-static {p0, v0}, Lcom/kuaishou/weapon/p0/bw;->b(Landroid/content/Context;Ljava/lang/String;)V

    return-object v0

    :cond_1
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {p0, v1}, Lcom/kuaishou/weapon/p0/bw;->a(Landroid/content/Context;Ljava/lang/String;)V

    return-object v1

    :cond_2
    const-string p0, ""

    return-object p0
.end method

.method public static b(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    invoke-static {p0}, Lcom/kuaishou/weapon/p0/df;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/df;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kuaishou/weapon/p0/df;->d(Ljava/lang/String;)V

    return-void
.end method

.method public static c(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    sget-object v0, Lcom/kuaishou/weapon/p0/bw;->a:Ljava/lang/String;

    invoke-static {p0, v0}, Landroid/provider/Settings$System;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const-string p0, ""

    return-object p0
.end method

.method public static d(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    :try_start_0
    invoke-static {p0}, Lcom/kuaishou/weapon/p0/df;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/df;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kuaishou/weapon/p0/df;->e()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const-string p0, ""

    return-object p0
.end method
