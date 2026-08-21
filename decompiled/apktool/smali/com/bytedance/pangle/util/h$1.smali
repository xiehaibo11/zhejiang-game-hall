.class final Lcom/bytedance/pangle/util/h$1;
.super Ljava/nio/file/SimpleFileVisitor;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bytedance/pangle/util/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/nio/file/SimpleFileVisitor<",
        "Ljava/nio/file/Path;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 127
    invoke-direct {p0}, Ljava/nio/file/SimpleFileVisitor;-><init>()V

    return-void
.end method

.method private static a(Ljava/nio/file/Path;)Ljava/nio/file/FileVisitResult;
    .locals 0

    if-eqz p0, :cond_0

    .line 132
    :try_start_0
    invoke-static {p0}, Ljava/nio/file/Files;->deleteIfExists(Ljava/nio/file/Path;)Z
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    .line 137
    :catch_0
    :cond_0
    sget-object p0, Ljava/nio/file/FileVisitResult;->CONTINUE:Ljava/nio/file/FileVisitResult;

    return-object p0
.end method

.method private static b(Ljava/nio/file/Path;)Ljava/nio/file/FileVisitResult;
    .locals 0

    if-eqz p0, :cond_0

    .line 154
    :try_start_0
    invoke-static {p0}, Ljava/nio/file/Files;->deleteIfExists(Ljava/nio/file/Path;)Z
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    .line 159
    :catch_0
    :cond_0
    sget-object p0, Ljava/nio/file/FileVisitResult;->CONTINUE:Ljava/nio/file/FileVisitResult;

    return-object p0
.end method


# virtual methods
.method public final synthetic postVisitDirectory(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;
    .locals 0

    .line 127
    check-cast p1, Ljava/nio/file/Path;

    invoke-static {p1}, Lcom/bytedance/pangle/util/h$1;->b(Ljava/nio/file/Path;)Ljava/nio/file/FileVisitResult;

    move-result-object p1

    return-object p1
.end method

.method public final bridge synthetic preVisitDirectory(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;
    .locals 0

    .line 2142
    sget-object p1, Ljava/nio/file/FileVisitResult;->CONTINUE:Ljava/nio/file/FileVisitResult;

    return-object p1
.end method

.method public final synthetic visitFile(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;
    .locals 0

    .line 127
    check-cast p1, Ljava/nio/file/Path;

    invoke-static {p1}, Lcom/bytedance/pangle/util/h$1;->a(Ljava/nio/file/Path;)Ljava/nio/file/FileVisitResult;

    move-result-object p1

    return-object p1
.end method

.method public final bridge synthetic visitFileFailed(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;
    .locals 0

    .line 1147
    sget-object p1, Ljava/nio/file/FileVisitResult;->CONTINUE:Ljava/nio/file/FileVisitResult;

    return-object p1
.end method
