.class final Lcom/tkay/expressad/foundation/g/f/e/b$a;
.super Ljava/io/FilterInputStream;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/foundation/g/f/e/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# instance fields
.field private final a:Ljava/net/HttpURLConnection;


# direct methods
.method constructor <init>(Ljava/net/HttpURLConnection;)V
    .locals 1

    .line 95
    invoke-static {p1}, Lcom/tkay/expressad/foundation/g/f/e/b;->a(Ljava/net/HttpURLConnection;)Ljava/io/InputStream;

    move-result-object v0

    invoke-direct {p0, v0}, Ljava/io/FilterInputStream;-><init>(Ljava/io/InputStream;)V

    .line 96
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/f/e/b$a;->a:Ljava/net/HttpURLConnection;

    return-void
.end method


# virtual methods
.method public final close()V
    .locals 1

    .line 101
    invoke-super {p0}, Ljava/io/FilterInputStream;->close()V

    .line 102
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/e/b$a;->a:Ljava/net/HttpURLConnection;

    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    return-void
.end method
