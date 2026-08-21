.class public final Lcom/loc/bg;
.super Lcom/loc/bh;
.source "Base64EncryptProcessor.java"


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/loc/bh;-><init>()V

    return-void
.end method

.method public constructor <init>(Lcom/loc/bh;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/loc/bh;-><init>(Lcom/loc/bh;)V

    return-void
.end method


# virtual methods
.method protected final a([B)[B
    .locals 0

    invoke-static {p1}, Lcom/loc/p;->c([B)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/loc/x;->a(Ljava/lang/String;)[B

    move-result-object p1

    return-object p1
.end method
