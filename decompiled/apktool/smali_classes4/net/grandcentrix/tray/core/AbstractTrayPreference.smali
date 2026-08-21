.class public abstract Lnet/grandcentrix/tray/core/AbstractTrayPreference;
.super Lnet/grandcentrix/tray/core/Preferences;
.source "AbstractTrayPreference.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Lnet/grandcentrix/tray/core/TrayStorage;",
        ">",
        "Lnet/grandcentrix/tray/core/Preferences<",
        "Lnet/grandcentrix/tray/core/TrayItem;",
        "TT;>;"
    }
.end annotation


# direct methods
.method protected constructor <init>(Lnet/grandcentrix/tray/core/TrayStorage;I)V
    .locals 0
    .param p1    # Lnet/grandcentrix/tray/core/TrayStorage;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "version"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;I)V"
        }
    .end annotation

    .line 31
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    .local p1, "storage":Lnet/grandcentrix/tray/core/TrayStorage;, "TT;"
    invoke-direct {p0, p1, p2}, Lnet/grandcentrix/tray/core/Preferences;-><init>(Lnet/grandcentrix/tray/core/PreferenceStorage;I)V

    .line 32
    return-void
.end method

.method private throwForNullValue(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;)V
    .locals 3
    .param p1, "value"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param
    .param p3, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/Class<",
            "*>;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lnet/grandcentrix/tray/core/WrongTypeException;
        }
    .end annotation

    .line 195
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    .local p2, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
    if-eqz p1, :cond_0

    .line 201
    return-void

    .line 196
    :cond_0
    new-instance v0, Lnet/grandcentrix/tray/core/WrongTypeException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "The value for key <"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "> is null. You obviously saved this value as String and try to access it with type "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 198
    invoke-virtual {p2}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " which cannot be null.  Always use getString(key, defaultValue) when accessing data you saved with put(String)."

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Lnet/grandcentrix/tray/core/WrongTypeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method


# virtual methods
.method protected annex(Lnet/grandcentrix/tray/core/TrayStorage;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;)V"
        }
    .end annotation

    .line 185
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    .local p1, "oldStorage":Lnet/grandcentrix/tray/core/TrayStorage;, "TT;"
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->getStorage()Lnet/grandcentrix/tray/core/PreferenceStorage;

    move-result-object v0

    check-cast v0, Lnet/grandcentrix/tray/core/TrayStorage;

    invoke-virtual {v0, p1}, Lnet/grandcentrix/tray/core/TrayStorage;->annex(Lnet/grandcentrix/tray/core/TrayStorage;)V

    .line 186
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "annexed "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " to "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 187
    return-void
.end method

.method public getBoolean(Ljava/lang/String;)Z
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lnet/grandcentrix/tray/core/ItemNotFoundException;
        }
    .end annotation

    .line 45
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/core/AbstractTrayPreference;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 46
    .local v0, "value":Ljava/lang/String;
    invoke-static {v0}, Ljava/lang/Boolean;->parseBoolean(Ljava/lang/String;)Z

    move-result v1

    return v1
.end method

.method public getBoolean(Ljava/lang/String;Z)Z
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "defaultValue"    # Z

    .line 37
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    :try_start_0
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/core/AbstractTrayPreference;->getBoolean(Ljava/lang/String;)Z

    move-result v0
    :try_end_0
    .catch Lnet/grandcentrix/tray/core/ItemNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 38
    :catch_0
    move-exception v0

    .line 39
    .local v0, "e":Lnet/grandcentrix/tray/core/ItemNotFoundException;
    return p2
.end method

.method public getFloat(Ljava/lang/String;)F
    .locals 3
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lnet/grandcentrix/tray/core/ItemNotFoundException;
        }
    .end annotation

    .line 60
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/core/AbstractTrayPreference;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 61
    .local v0, "value":Ljava/lang/String;
    const-class v1, Ljava/lang/Float;

    invoke-direct {p0, v0, v1, p1}, Lnet/grandcentrix/tray/core/AbstractTrayPreference;->throwForNullValue(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;)V

    .line 63
    :try_start_0
    invoke-static {v0}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v1
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return v1

    .line 64
    :catch_0
    move-exception v1

    .line 65
    .local v1, "e":Ljava/lang/NumberFormatException;
    new-instance v2, Lnet/grandcentrix/tray/core/WrongTypeException;

    invoke-direct {v2, v1}, Lnet/grandcentrix/tray/core/WrongTypeException;-><init>(Ljava/lang/Throwable;)V

    throw v2
.end method

.method public getFloat(Ljava/lang/String;F)F
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "defaultValue"    # F

    .line 52
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    :try_start_0
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/core/AbstractTrayPreference;->getFloat(Ljava/lang/String;)F

    move-result v0
    :try_end_0
    .catch Lnet/grandcentrix/tray/core/ItemNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 53
    :catch_0
    move-exception v0

    .line 54
    .local v0, "e":Lnet/grandcentrix/tray/core/ItemNotFoundException;
    return p2
.end method

.method public getInt(Ljava/lang/String;)I
    .locals 3
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lnet/grandcentrix/tray/core/ItemNotFoundException;
        }
    .end annotation

    .line 80
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/core/AbstractTrayPreference;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 81
    .local v0, "value":Ljava/lang/String;
    const-class v1, Ljava/lang/Integer;

    invoke-direct {p0, v0, v1, p1}, Lnet/grandcentrix/tray/core/AbstractTrayPreference;->throwForNullValue(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;)V

    .line 83
    :try_start_0
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return v1

    .line 84
    :catch_0
    move-exception v1

    .line 85
    .local v1, "e":Ljava/lang/NumberFormatException;
    new-instance v2, Lnet/grandcentrix/tray/core/WrongTypeException;

    invoke-direct {v2, v1}, Lnet/grandcentrix/tray/core/WrongTypeException;-><init>(Ljava/lang/Throwable;)V

    throw v2
.end method

.method public getInt(Ljava/lang/String;I)I
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "defaultValue"    # I

    .line 72
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    :try_start_0
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/core/AbstractTrayPreference;->getInt(Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catch Lnet/grandcentrix/tray/core/ItemNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 73
    :catch_0
    move-exception v0

    .line 74
    .local v0, "e":Lnet/grandcentrix/tray/core/ItemNotFoundException;
    return p2
.end method

.method public getLong(Ljava/lang/String;)J
    .locals 3
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lnet/grandcentrix/tray/core/ItemNotFoundException;
        }
    .end annotation

    .line 100
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/core/AbstractTrayPreference;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 101
    .local v0, "value":Ljava/lang/String;
    const-class v1, Ljava/lang/Long;

    invoke-direct {p0, v0, v1, p1}, Lnet/grandcentrix/tray/core/AbstractTrayPreference;->throwForNullValue(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;)V

    .line 103
    :try_start_0
    invoke-static {v0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v1
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return-wide v1

    .line 104
    :catch_0
    move-exception v1

    .line 105
    .local v1, "e":Ljava/lang/NumberFormatException;
    new-instance v2, Lnet/grandcentrix/tray/core/WrongTypeException;

    invoke-direct {v2, v1}, Lnet/grandcentrix/tray/core/WrongTypeException;-><init>(Ljava/lang/Throwable;)V

    throw v2
.end method

.method public getLong(Ljava/lang/String;J)J
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "defaultValue"    # J

    .line 92
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    :try_start_0
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/core/AbstractTrayPreference;->getLong(Ljava/lang/String;)J

    move-result-wide v0
    :try_end_0
    .catch Lnet/grandcentrix/tray/core/ItemNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-wide v0

    .line 93
    :catch_0
    move-exception v0

    .line 94
    .local v0, "e":Lnet/grandcentrix/tray/core/ItemNotFoundException;
    return-wide p2
.end method

.method public getName()Ljava/lang/String;
    .locals 1

    .line 113
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->getStorage()Lnet/grandcentrix/tray/core/PreferenceStorage;

    move-result-object v0

    check-cast v0, Lnet/grandcentrix/tray/core/TrayStorage;

    invoke-virtual {v0}, Lnet/grandcentrix/tray/core/TrayStorage;->getModuleName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getString(Ljava/lang/String;)Ljava/lang/String;
    .locals 4
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lnet/grandcentrix/tray/core/ItemNotFoundException;
        }
    .end annotation

    .line 118
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/core/Preferences;->getPref(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lnet/grandcentrix/tray/core/TrayItem;

    .line 119
    .local v0, "pref":Lnet/grandcentrix/tray/core/TrayItem;
    if-eqz v0, :cond_0

    .line 122
    invoke-virtual {v0}, Lnet/grandcentrix/tray/core/TrayItem;->value()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 120
    :cond_0
    new-instance v1, Lnet/grandcentrix/tray/core/ItemNotFoundException;

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    const-string v3, "Value for Key <%s> not found"

    invoke-direct {v1, v3, v2}, Lnet/grandcentrix/tray/core/ItemNotFoundException;-><init>(Ljava/lang/String;[Ljava/lang/Object;)V

    throw v1
.end method

.method public getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p1, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "defaultValue"    # Ljava/lang/String;
    .annotation build Landroid/support/annotation/Nullable;
    .end annotation

    .line 129
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    :try_start_0
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/core/AbstractTrayPreference;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Lnet/grandcentrix/tray/core/ItemNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 130
    :catch_0
    move-exception v0

    .line 131
    .local v0, "e":Lnet/grandcentrix/tray/core/ItemNotFoundException;
    return-object p2
.end method

.method public registerOnTrayPreferenceChangeListener(Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;)V
    .locals 1
    .param p1, "listener"    # Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param

    .line 155
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->getStorage()Lnet/grandcentrix/tray/core/PreferenceStorage;

    move-result-object v0

    check-cast v0, Lnet/grandcentrix/tray/core/TrayStorage;

    invoke-virtual {v0, p1}, Lnet/grandcentrix/tray/core/TrayStorage;->registerOnTrayPreferenceChangeListener(Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;)V

    .line 156
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 160
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "(@"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "){name="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 161
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/AbstractTrayPreference;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "}"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 160
    return-object v0
.end method

.method public unregisterOnTrayPreferenceChangeListener(Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;)V
    .locals 1
    .param p1, "listener"    # Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param

    .line 173
    .local p0, "this":Lnet/grandcentrix/tray/core/AbstractTrayPreference;, "Lnet/grandcentrix/tray/core/AbstractTrayPreference<TT;>;"
    invoke-virtual {p0}, Lnet/grandcentrix/tray/core/Preferences;->getStorage()Lnet/grandcentrix/tray/core/PreferenceStorage;

    move-result-object v0

    check-cast v0, Lnet/grandcentrix/tray/core/TrayStorage;

    invoke-virtual {v0, p1}, Lnet/grandcentrix/tray/core/TrayStorage;->unregisterOnTrayPreferenceChangeListener(Lnet/grandcentrix/tray/core/OnTrayPreferenceChangeListener;)V

    .line 174
    return-void
.end method
