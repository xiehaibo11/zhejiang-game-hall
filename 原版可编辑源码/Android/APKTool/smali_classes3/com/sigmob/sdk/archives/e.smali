.class public final Lcom/sigmob/sdk/archives/e;
.super Ljava/lang/Object;


# static fields
.field private static final a:Lcom/sigmob/sdk/archives/d;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/archives/d;

    invoke-direct {v0}, Lcom/sigmob/sdk/archives/d;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/archives/e;->a:Lcom/sigmob/sdk/archives/d;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a()V
    .locals 2

    sget-object v0, Ljava/lang/System;->out:Ljava/io/PrintStream;

    const-string v1, "Parameters: archive-name [archive-type]"

    invoke-virtual {v0, v1}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    return-void
.end method

.method public static a([Ljava/lang/String;)V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    array-length v0, p0

    if-nez v0, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/archives/e;->a()V

    return-void

    :cond_0
    sget-object v0, Ljava/lang/System;->out:Ljava/io/PrintStream;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Analysing "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x0

    aget-object v3, p0, v2

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    new-instance v0, Ljava/io/File;

    aget-object v1, p0, v2

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v1

    if-nez v1, :cond_1

    sget-object v1, Ljava/lang/System;->err:Ljava/io/PrintStream;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, " doesn\'t exist or is a directory"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    :cond_1
    new-instance v1, Ljava/io/BufferedInputStream;

    new-instance v2, Ljava/io/FileInputStream;

    invoke-direct {v2, v0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v1, v2}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V

    array-length v0, p0

    const/4 v2, 0x1

    if-le v0, v2, :cond_2

    sget-object v0, Lcom/sigmob/sdk/archives/e;->a:Lcom/sigmob/sdk/archives/d;

    aget-object p0, p0, v2

    invoke-virtual {v0, p0, v1}, Lcom/sigmob/sdk/archives/d;->a(Ljava/lang/String;Ljava/io/InputStream;)Lcom/sigmob/sdk/archives/c;

    move-result-object p0

    goto :goto_0

    :cond_2
    sget-object p0, Lcom/sigmob/sdk/archives/e;->a:Lcom/sigmob/sdk/archives/d;

    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/archives/d;->a(Ljava/io/InputStream;)Lcom/sigmob/sdk/archives/c;

    move-result-object p0

    :goto_0
    sget-object v0, Ljava/lang/System;->out:Ljava/io/PrintStream;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Created "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    :goto_1
    invoke-virtual {p0}, Lcom/sigmob/sdk/archives/c;->a()Lcom/sigmob/sdk/archives/a;

    move-result-object v0

    if-eqz v0, :cond_3

    sget-object v2, Ljava/lang/System;->out:Ljava/io/PrintStream;

    invoke-interface {v0}, Lcom/sigmob/sdk/archives/a;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    goto :goto_1

    :cond_3
    invoke-virtual {p0}, Lcom/sigmob/sdk/archives/c;->close()V

    invoke-virtual {v1}, Ljava/io/InputStream;->close()V

    return-void
.end method
