.class public Lcom/sigmob/sdk/videocache/e;
.super Ljava/lang/Object;


# instance fields
.field public final a:Ljava/io/File;

.field public final b:Lcom/sigmob/sdk/videocache/file/c;

.field public final c:Lcom/sigmob/sdk/videocache/file/a;

.field public final d:Lcom/sigmob/sdk/videocache/sourcestorage/c;

.field public final e:Lcom/sigmob/sdk/videocache/headers/b;


# direct methods
.method constructor <init>(Ljava/io/File;Lcom/sigmob/sdk/videocache/file/c;Lcom/sigmob/sdk/videocache/file/a;Lcom/sigmob/sdk/videocache/sourcestorage/c;Lcom/sigmob/sdk/videocache/headers/b;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/e;->a:Ljava/io/File;

    iput-object p2, p0, Lcom/sigmob/sdk/videocache/e;->b:Lcom/sigmob/sdk/videocache/file/c;

    iput-object p3, p0, Lcom/sigmob/sdk/videocache/e;->c:Lcom/sigmob/sdk/videocache/file/a;

    iput-object p4, p0, Lcom/sigmob/sdk/videocache/e;->d:Lcom/sigmob/sdk/videocache/sourcestorage/c;

    iput-object p5, p0, Lcom/sigmob/sdk/videocache/e;->e:Lcom/sigmob/sdk/videocache/headers/b;

    return-void
.end method


# virtual methods
.method a(Ljava/lang/String;)Ljava/io/File;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/e;->b:Lcom/sigmob/sdk/videocache/file/c;

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/videocache/file/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/sigmob/sdk/videocache/e;->a:Ljava/io/File;

    invoke-direct {v0, v1, p1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    return-object v0
.end method
