.class public Lcom/tkay/network/directly/DirectlyTYAdapter;
.super Lcom/tkay/network/adx/AdxTYAdapter;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Lcom/tkay/network/adx/AdxTYAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public getNetworkName()Ljava/lang/String;
    .locals 1

    const-string v0, "Directly"

    return-object v0
.end method
