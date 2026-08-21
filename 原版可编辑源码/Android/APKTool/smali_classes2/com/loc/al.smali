.class public final Lcom/loc/al;
.super Ljava/lang/Object;
.source "NetReuestParam.java"


# static fields
.field private static final a:Ljava/lang/String;

.field private static final b:Ljava/lang/String;

.field private static final c:Ljava/lang/String;

.field private static final d:Ljava/lang/String;

.field private static final e:Ljava/lang/String;

.field private static f:Z


# instance fields
.field private g:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "SRFZHZUVZT3BOa0ZiemZRQQ"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/al;->a:Ljava/lang/String;

    const-string v0, "FbGJzX3Nkaw"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/al;->b:Ljava/lang/String;

    const-string v0, "SWjJuYVh2eEMwSzVmNklFSmh0UXpVb2xtOVM4eU9Ua3E"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/al;->c:Ljava/lang/String;

    const-string v0, "FQU5EU0RLMTA"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/al;->d:Ljava/lang/String;

    const-string v0, "FMTAw"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/al;->e:Ljava/lang/String;

    const/4 v0, 0x0

    sput-boolean v0, Lcom/loc/al;->f:Z

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/loc/al;->g:Ljava/lang/String;

    return-void
.end method

.method public static a()Lcom/loc/o$a;
    .locals 1

    new-instance v0, Lcom/loc/al$1;

    invoke-direct {v0}, Lcom/loc/al$1;-><init>()V

    return-object v0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "UY29kZQ"

    invoke-static {p1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v1, 0x1

    if-ne p1, v1, :cond_0

    const-string p1, "FZGF0YQ"

    invoke-static {p1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "FYWRpdQ"

    invoke-static {p1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p1}, Lcom/loc/am;->a(Ljava/lang/String;)V

    invoke-static {p0}, Lcom/loc/ah;->a(Landroid/content/Context;)Lcom/loc/ah;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/loc/ah;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method public static c()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/loc/am;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private d()Ljava/lang/String;
    .locals 6

    iget-object v0, p0, Lcom/loc/al;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/loc/al;->g:Ljava/lang/String;

    return-object v0

    :cond_0
    const-string v0, "TUpJaVFGNk5LXHtSX1ZwQlRiV1VVZmtYWU1haV1hYWHCiXJtZcKLdmp8wpFewo1/wphwwoFzZmR8aWp6X2k6XsKDwoF+WGbChGdAScKLwoVXfmNxYEvCjcKLSG7CjGNvwoZtVFZ7WMKXYMKfwo5dZcKHfzZXUG85X0hNOVJrb2U8ZlJGW8KCe8KOV8KQWllrcGrCjcKIT25lUHPCicKGVsKKeG5fwp56XsKbc8KJbUVYR0pqU09gfE5/WT5YeHNAwoDCh1Z4V8KQT3JQYmxQbcKYwpFxdG/Ci3rCmMKQwop+YVbCmWFxwpxBdW07Zjp/ODlAbcKEY1pQwoJowohbV1VmV1laWmtcYGbClXfCk2NvesKdwohdWFnCol/CjWTCmMKicG1ENnAvPFtpcXtfclhfXsKAwolgRWNbS29OwpFafV3CkMKLTcKCwolrU3DCmGnCmX9wdsKPcXDCg3LCnFpGcDVTeTxNWW07bXJePVRfQn3ChGNraFhbwpNcwpXChMKNaFVjeVF8wojChm9YbmvChGDCmHvChGVQWjo0Z3o9djleOztWcVxSfWE9woLChkZdcGTCgVzCjMKUVE12wpV5bcKVwprCnntZworCgsKfwpHCksKnwpHClURURW9YaDtwXU1bck5YX3hSVFZUYlxKWFlua1xeYm9jU8KDa3ZrwpZ5am9Za3jCknR3fA"

    invoke-static {v0}, Lcom/loc/p;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    const/4 v2, 0x0

    const/4 v3, 0x0

    :goto_0
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v4

    if-ge v3, v4, :cond_1

    invoke-virtual {v0, v3}, Ljava/lang/String;->charAt(I)C

    move-result v4

    rem-int/lit8 v5, v3, 0x30

    sub-int/2addr v4, v5

    int-to-char v4, v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(C)Ljava/lang/StringBuffer;

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    invoke-virtual {v1}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    :goto_1
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v3

    div-int/lit8 v3, v3, 0x2

    if-ge v2, v3, :cond_2

    invoke-virtual {v0, v2}, Ljava/lang/String;->charAt(I)C

    move-result v3

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v4

    add-int/lit8 v4, v4, -0x1

    sub-int/2addr v4, v2

    invoke-virtual {v0, v4}, Ljava/lang/String;->charAt(I)C

    move-result v4

    add-int/2addr v3, v4

    div-int/lit8 v3, v3, 0x2

    int-to-char v3, v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->append(C)Ljava/lang/StringBuffer;

    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    :cond_2
    invoke-virtual {v1}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/loc/al;->g:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "LdGlk"

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "FZGl1"

    invoke-static {p1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "AZGl1Mg"

    invoke-static {p1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "EZGl1Mw"

    invoke-static {p1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    const/4 p3, 0x0

    if-eqz p2, :cond_0

    return-object p3

    :cond_0
    invoke-static {}, Lcom/loc/ao;->a()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p4

    if-nez p4, :cond_1

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\u0000"

    invoke-virtual {p4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p4

    invoke-static {p1, p4}, Lcom/loc/bk;->a([B[B)[B

    move-result-object p1

    invoke-static {p1}, Lcom/loc/aj;->a([B)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p4

    if-nez p4, :cond_1

    :try_start_1
    invoke-direct {p0}, Lcom/loc/al;->d()Ljava/lang/String;

    move-result-object p4

    invoke-static {p4}, Lcom/loc/an;->a(Ljava/lang/String;)Ljava/security/PublicKey;

    move-result-object p4

    const-string v0, "utf-8"

    invoke-virtual {p2, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p2

    invoke-static {p2, p4}, Lcom/loc/an;->a([BLjava/security/PublicKey;)[B

    move-result-object p2

    invoke-static {p2}, Lcom/loc/aj;->a([B)Ljava/lang/String;

    move-result-object p2

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Fa2V5PQ"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p4, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "SJmRhdGE9"

    invoke-static {p2}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p4, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-object p1

    :catchall_1
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    return-object p3
.end method

.method public final declared-synchronized b()Ljava/util/Map;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    :try_start_0
    sget-boolean v0, Lcom/loc/al;->f:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    monitor-exit p0

    return-object v0

    :cond_0
    const/4 v0, 0x1

    :try_start_1
    sput-boolean v0, Lcom/loc/al;->f:Z

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "FZW50"

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "FMg"

    invoke-static {v2}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "SY2hhbm5lbD0"

    invoke-static {v2}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/loc/al;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "SJmRpdj0"

    invoke-static {v2}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/loc/al;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuffer;

    invoke-direct {v2}, Ljava/lang/StringBuffer;-><init>()V

    sget-object v3, Lcom/loc/al;->b:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    sget-object v3, Lcom/loc/al;->d:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v3, "FQA"

    invoke-static {v3}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    sget-object v3, Lcom/loc/al;->c:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v2}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/loc/ao;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "FJnNpZ249"

    invoke-static {v3}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Ljava/util/Locale;->US:Ljava/util/Locale;

    invoke-virtual {v2, v3}, Ljava/lang/String;->toUpperCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "SJm91dHB1dD1qc29u"

    invoke-static {v3}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "\u0000"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    sget-object v2, Lcom/loc/al;->a:Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-static {v1, v2}, Lcom/loc/bk;->a([B[B)[B

    move-result-object v1

    const-string v2, "FaW4"

    invoke-static {v2}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1}, Lcom/loc/aj;->a([B)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "Sa2V5dA"

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sget-object v2, Lcom/loc/al;->e:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method
