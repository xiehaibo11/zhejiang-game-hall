.class public final Lcom/tkay/core/common/c/k$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/c/k;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# static fields
.field public static final a:Ljava/lang/String; = "offer_data_cache"

.field public static final b:Ljava/lang/String; = "bid_id"

.field public static final c:Ljava/lang/String; = "adsource_id"

.field public static final d:Ljava/lang/String; = "network_firm_id"

.field public static final e:Ljava/lang/String; = "offer_data"

.field public static final f:Ljava/lang/String; = "CREATE TABLE IF NOT EXISTS offer_data_cache(bid_id TEXT ,adsource_id TEXT ,network_firm_id INTEGER ,offer_data TEXT)"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 151
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
