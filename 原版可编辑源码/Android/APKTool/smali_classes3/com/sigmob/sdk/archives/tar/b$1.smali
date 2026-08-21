.class Lcom/sigmob/sdk/archives/tar/b$1;
.super Ljava/io/InputStreamReader;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/archives/tar/b;->i()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/archives/tar/b;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/archives/tar/b;Ljava/io/InputStream;Ljava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/UnsupportedEncodingException;
        }
    .end annotation

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/b$1;->a:Lcom/sigmob/sdk/archives/tar/b;

    invoke-direct {p0, p2, p3}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public close()V
    .locals 0

    return-void
.end method
