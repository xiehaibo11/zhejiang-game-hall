.class public Lcom/bianfeng/a/a;
.super Ljava/lang/Object;
.source "Afexter.java"


# direct methods
.method public static a(Ljava/lang/String;)Lcom/bianfeng/a/a/b;
    .locals 1

    .line 43
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/bianfeng/a/a/c;->a(Ljava/io/File;)Lcom/bianfeng/a/a/b;

    move-result-object p0

    return-object p0
.end method

.method public static b(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 47
    invoke-static {p0}, Lcom/bianfeng/a/a;->a(Ljava/lang/String;)Lcom/bianfeng/a/a/b;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 49
    invoke-virtual {p0}, Lcom/bianfeng/a/a/b;->a()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method
