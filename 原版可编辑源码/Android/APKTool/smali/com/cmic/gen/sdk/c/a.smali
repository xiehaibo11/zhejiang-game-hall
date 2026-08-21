.class public abstract Lcom/cmic/gen/sdk/c/a;
.super Ljavax/net/ssl/SSLSocketFactory;
.source "CMICTlsSocketFactory.java"


# instance fields
.field protected delegate:Ljavax/net/ssl/SSLSocketFactory;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 7
    invoke-direct {p0}, Ljavax/net/ssl/SSLSocketFactory;-><init>()V

    .line 8
    invoke-static {}, Ljavax/net/ssl/HttpsURLConnection;->getDefaultSSLSocketFactory()Ljavax/net/ssl/SSLSocketFactory;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/c/a;->delegate:Ljavax/net/ssl/SSLSocketFactory;

    return-void
.end method
